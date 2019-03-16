cmake_minimum_required(VERSION 3.13)
project(XOR_linked_list)

set(CMAKE_CXX_STANDARD 14)

add_executable(XOR_linked_list main.cpp DoublyLinkedList.cpp DoublyLinkedList.h Node.cpp Node.h)