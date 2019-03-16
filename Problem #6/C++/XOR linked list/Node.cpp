//
// Created by Andrei on 2019-03-16.
//

#include "Node.h"
#include <cstdint>

Node::Node(int data) : data(data), both(nullptr) {
}

void Node::setBoth(Node* prev, Node* next) {
    both = (Node*) ((uintptr_t) (prev) ^ (uintptr_t) (next));
}

/* *
 * list: A -> B -> C -> D
 * both:  0ˆb  aˆc  bˆd  cˆ0
 * */
Node* Node::getNext(Node* prevNode) {
    Node* node;
    uintptr_t nodeAddr = (uintptr_t)both ^ (uintptr_t)prevNode;
    node = (Node*)nodeAddr;
    return node;
}
