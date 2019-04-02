//
// Created by Andrei on 4/1/2019.
//

#ifndef JOBSCHEDULER_ITASK_H
#define JOBSCHEDULER_ITASK_H

class iTask {
public:
    virtual void processTask() = 0;

    virtual ~iTask() {

    }
};


#endif //JOBSCHEDULER_ITASK_H
