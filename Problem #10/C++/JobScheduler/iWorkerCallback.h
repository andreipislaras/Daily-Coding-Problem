//
// Created by uidv7600 on 4/1/2019.
//

#ifndef JOBSCHEDULER_IWORKERCALLBACK_H
#define JOBSCHEDULER_IWORKERCALLBACK_H

class Worker;

class iWorkerCallback {
public:
    virtual void TaskDone(Worker *w) = 0;
};

#endif //JOBSCHEDULER_IWORKERCALLBACK_H
