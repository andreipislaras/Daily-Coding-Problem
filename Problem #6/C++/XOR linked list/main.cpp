#include <iostream>
#include "Node.h"
#include "DoublyLinkedList.h"

using namespace std;

int main() {
    DoublyLinkedList* linkedList = new DoublyLinkedList();

    linkedList->add(4);
    linkedList->add(9);
    linkedList->add(6);
    linkedList->add(8);
    linkedList->add(1);

    linkedList->printList();

    cout << "Index 0: " << linkedList->get(0) << endl;
    cout << "Index 1: " << linkedList->get(1) << endl;
    cout << "Index 2: " << linkedList->get(2) << endl;
    cout << "Index 4: " << linkedList->get(4) << endl;
    try {
        cout << "Index 5: " << linkedList->get(5) << endl;
    } catch (const std::out_of_range& oorError) {
        cout << "Error: " << oorError.what() << endl;
    }

    delete linkedList;
    return 0;
}