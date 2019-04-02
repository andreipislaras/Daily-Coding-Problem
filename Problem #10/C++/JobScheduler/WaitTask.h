//
// Created by uidv7600 on 4/1/2019.
//

#ifndef JOBSCHEDULER_WAITTASK_H
#define JOBSCHEDULER_WAITTASK_H

#include "iTask.h"

#include <string>
using namespace std;

class WaitTask : public iTask {
public:
    WaitTask(int waitTime, string taskName);
    virtual ~WaitTask();

    void processTask() override;

private:
    int mWaitTime;
    string mTaskName;
};


#endif //JOBSCHEDULER_WAITTASK_H
