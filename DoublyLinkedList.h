

#ifndef DOUBLY_LINKED_LIST_DOUBLYLINKEDLIST_H
#define DOUBLY_LINKED_LIST_DOUBLYLINKEDLIST_H
#include "Node.h"

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    int length = 0;

public:
    explicit DoublyLinkedList(int value);
    DoublyLinkedList() = default;
    void printList();
    void getHead();
    void getTail();
    void getLength();
    void append(int value);
    void deleteLast();
    void prepend(int value);
    void deleteFirst();
    void get(int index);
};


#endif //DOUBLY_LINKED_LIST_DOUBLYLINKEDLIST_H
