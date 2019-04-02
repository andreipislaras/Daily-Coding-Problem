//
// Created by Andrei on 4/1/2019.
//

#ifndef JOBSCHEDULER_DISPATCHER_H
#define JOBSCHEDULER_DISPATCHER_H

#include "iTask.h"
#include "Worker.h"
#include "iWorkerCallback.h"

#include <iostream>
#include <list>
#include <mutex>
using namespace std;

class Dispatcher : public iWorkerCallback {
public:
    Dispatcher(int numberOfWorkers);
    virtual ~Dispatcher();

    void addTask(iTask *task);

    void TaskDone(Worker *w) override;

private:
    Worker *findFreeWorker();

    list<Worker *> mWorkers;
    list<iTask *> mTasks;

    std::mutex mTaskMutex;
    std::mutex mWorkerMutex;
};


#endif //JOBSCHEDULER_DISPATCHER_H
