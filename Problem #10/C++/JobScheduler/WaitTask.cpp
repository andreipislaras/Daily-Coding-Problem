//
// Created by uidv7600 on 4/1/2019.
//

#include "WaitTask.h"

#include <thread>
#include <chrono>
#include <iostream>
using namespace std;

WaitTask::WaitTask(int waitTime, string taskName) : mWaitTime(waitTime), mTaskName(taskName) {
}

WaitTask::~WaitTask() {
}

void WaitTask::processTask() {
    this_thread::sleep_for(chrono::seconds(mWaitTime));
    cout << mTaskName + " done (" << mWaitTime << "s)" << endl;
}
