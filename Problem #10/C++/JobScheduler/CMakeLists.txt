cmake_minimum_required(VERSION 3.13)
project(JobScheduler)

set(CMAKE_CXX_STANDARD 14)

add_executable(JobScheduler main.cpp Dispatcher.cpp Dispatcher.h iTask.h WaitTask.cpp WaitTask.h Worker.cpp Worker.h iWorkerCallback.h)