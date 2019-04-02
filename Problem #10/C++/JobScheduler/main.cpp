//
// Created by uidv7600 on 4/1/2019.
//

#include "Dispatcher.h"
#include "WaitTask.h"

int main() {
    cout << "Start!" << std::endl; cout << endl;

    list <iTask *> tasks;
    tasks.push_back(new WaitTask(1, "First Task"));
    tasks.push_back(new WaitTask(5, "Second Task"));
    tasks.push_back(new WaitTask(4, "Third Task"));

    tasks.push_back(new WaitTask(2, "Fourth Task"));
    tasks.push_back(new WaitTask(2, "Fifth Task"));
    tasks.push_back(new WaitTask(3, "Sixth Task"));
    tasks.push_back(new WaitTask(3, "Seventh Task"));

    Dispatcher *dispatcher = new Dispatcher(2);
    for (list<iTask *>::iterator it = tasks.begin(); it != tasks.end(); ++it) {
        dispatcher->addTask(*it);
    }

    getchar();

    delete dispatcher;
    for (list<iTask *>::iterator it = tasks.begin(); it != tasks.end(); ++it) {
        delete *it;
    }
    std::cout << "End!" << std::endl;
    return 0;
}