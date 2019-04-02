//
// Created by Andrei on 4/1/2019.
//

#include "Dispatcher.h"

Dispatcher::Dispatcher(int numberOfWorkers) : mWorkers(), mTasks() {

    for (int i = 0; i < numberOfWorkers; ++i) {
        Worker *w = new Worker(this);
        mWorkers.push_back(w);
    }
}

Dispatcher::~Dispatcher() {
    for (int i = 0; i < mWorkers.size(); ++i) {
        Worker *w = mWorkers.front();
        mWorkers.pop_front();
        delete w;
    }
}

void Dispatcher::addTask(iTask *task) {

    Worker *worker = findFreeWorker();
    if(worker != nullptr) {
        worker->startTask(task);
    } else {
        lock_guard<mutex> lck (mTaskMutex);
        mTasks.push_back(task);
    }
}

Worker *Dispatcher::findFreeWorker() {

    lock_guard<mutex> lck (mWorkerMutex);

    Worker *w = nullptr;
    if (mWorkers.size() != 0) {
        w = mWorkers.front();
        mWorkers.pop_front();
    }
    return w;
}

void Dispatcher::TaskDone(Worker *w) {

    lock_guard<mutex> lckTask (mTaskMutex);

    if(mTasks.size() != 0) {
        iTask *task = mTasks.front();
        mTasks.pop_front();
        w->startTask(task);
    } else {
        lock_guard<mutex> lckWorker (mWorkerMutex);
        mWorkers.push_back(w);
    }
}
