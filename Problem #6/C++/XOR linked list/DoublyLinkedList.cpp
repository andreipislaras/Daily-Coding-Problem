//
// Created by Andrei on 2019-03-16.
//

#include <iostream>
#include <cassert>
#include <stdexcept>
#include "DoublyLinkedList.h"
using namespace std;

DoublyLinkedList::DoublyLinkedList() : head(nullptr), numberOfElements(0) {
}

DoublyLinkedList::~DoublyLinkedList() {
    cout << "Deleted nodes: ";
    while (head != nullptr) {
        Node* deleteNode = head;
        Node* nextNode = head->getNext(nullptr);
        if (nextNode != nullptr) {
            nextNode->setBoth(nullptr, nextNode->getNext(head));
        }
        head = nextNode;
        cout << deleteNode->data << " ";
        delete deleteNode;
    }
}

void DoublyLinkedList::add(int element) {
    Node* node = new Node(element);

    if (head == nullptr) {
        head = node;
    } else {
        Node* last = head;
        Node* prevLast = nullptr;

        Node* nextNode = last->getNext(prevLast);
        while (nextNode != nullptr) {
            prevLast = last;
            last = nextNode;
            nextNode = last->getNext(prevLast);
        }
        last->setBoth(prevLast, node);
        node->setBoth(last, nullptr);
    }
    numberOfElements++;
}

int DoublyLinkedList::get(int index) {
    int retValue;
    Node* last = head;
    if (index + 1 > numberOfElements) {
        throw out_of_range("DoublyLinkedList::get() : index is out of range");
    } else {
        int currentIndex = 0;
        Node* last = head;
        Node* prevLast = nullptr;

        Node* nextNode = last->getNext(prevLast);
        while (nextNode != nullptr && currentIndex != index) {
            prevLast = last;
            last = nextNode;
            nextNode = last->getNext(prevLast);
            currentIndex++;
        }
        retValue = last->data;
    }
    return retValue;
}

void DoublyLinkedList::printList() {
    if (head != nullptr) {
        Node* last = head;
        cout << "List: " << last->data;
        Node* prevLast = nullptr;

        Node* nextNode = last->getNext(prevLast);
        while (nextNode != nullptr) {
            prevLast = last;
            last = nextNode;
            nextNode = last->getNext(prevLast);

            cout << " -> " << last->data;
        }
        cout << endl;
    }
}
