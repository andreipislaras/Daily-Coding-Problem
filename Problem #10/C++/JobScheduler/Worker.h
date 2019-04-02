//
// Created by uidv7600 on 4/1/2019.
//

#ifndef JOBSCHEDULER_WORKER_H
#define JOBSCHEDULER_WORKER_H

#include "iTask.h"
#include "iWorkerCallback.h"

#include <thread>
using namespace std;

class Worker {
public:
    Worker(iWorkerCallback *cb);
    virtual ~Worker();

    void startTask(iTask *task);

private:

    static void processThread(Worker *w);

    iWorkerCallback *mWorkerCallback;
    iTask *mTask;
    thread mThread;
};


#endif //JOBSCHEDULER_WORKER_H
