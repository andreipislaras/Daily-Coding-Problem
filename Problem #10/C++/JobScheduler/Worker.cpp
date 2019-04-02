//
// Created by uidv7600 on 4/1/2019.
//

#include "Worker.h"

Worker::Worker(iWorkerCallback *cb) : mWorkerCallback(cb) {
}

Worker::~Worker() {
    if (mThread.joinable()) {
        mThread.join();
    }
}

void Worker::startTask(iTask *task) {
    mTask = task;
    mThread = thread(&processThread, this);
    mThread.detach();
}

void Worker::processThread(Worker *w) {
    w->mTask->processTask();
    w->mWorkerCallback->TaskDone(w);
}
