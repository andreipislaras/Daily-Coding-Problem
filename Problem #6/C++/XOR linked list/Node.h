//
// Created by Andrei on 2019-03-16.
//

#ifndef XOR_LINKED_LIST_NODE_H
#define XOR_LINKED_LIST_NODE_H


class Node {
public:
    Node(int data);

    void setBoth(Node* prev, Node* next);

    Node* getNext(Node* prevNode);

    int data;
    Node* both;
};


#endif //XOR_LINKED_LIST_NODE_H
