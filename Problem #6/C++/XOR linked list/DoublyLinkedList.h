//
// Created by Andrei on 2019-03-16.
//

#ifndef XOR_LINKED_LIST_DOUBLYLINKEDLIST_H
#define XOR_LINKED_LIST_DOUBLYLINKEDLIST_H


#include "Node.h"

class DoublyLinkedList {
public:
    DoublyLinkedList();

    void add(int element);
    int get(int index);

    void printList();

    virtual ~DoublyLinkedList();

private:

    Node* head;
    int numberOfElements;
};


#endif //XOR_LINKED_LIST_DOUBLYLINKEDLIST_H
