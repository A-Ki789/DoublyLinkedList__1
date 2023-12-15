
#include "Node.h"
#include "DoublyLinkedList.h"
#include <iostream>

using namespace std;

DoublyLinkedList::DoublyLinkedList(int value) {
    Node* newNode = new Node(value);
    length = 1;
    head = newNode;
    tail = newNode;

}

void DoublyLinkedList::printList() {
    auto* temp = head;
    while(temp){
        cout<<temp->value<<endl;
        temp = temp->next;
    }
}

void DoublyLinkedList::getHead() {
    cout<<this->head->value<<endl;

}

void DoublyLinkedList::getTail() {
    cout<<this->tail->value<<endl;

}

void DoublyLinkedList::getLength() {
    cout<<this->length<<endl;

}

void DoublyLinkedList::append(int value) {
    auto* newNode = new Node(value);

    if (length==0){
        head= newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        newNode->previous = tail;
        tail = newNode;
    }
    length++;

}

void DoublyLinkedList::deleteLast() {
    Node* temp = tail;
    if (length == 0) return;
    else if(length==1) {head = nullptr; tail= nullptr;}
    else {
        tail = tail->previous;
        tail->next = nullptr;
    }
    delete temp;
    length--;
}

void DoublyLinkedList::prepend(int value) {
    auto* newNode = new Node(value);
    if(length == 0){head = newNode; tail = newNode;}
    else{
        newNode->next = head;
        head->previous = newNode;
        head = newNode;
    }
    length++;

}

void DoublyLinkedList::deleteFirst() {
    Node* temp = head;
    if (length == 0) return;
    if(length==1){head = nullptr;tail = nullptr;}
    else{
    head= head->next;
    head->previous = nullptr;
    }
    delete temp;
    length--;

}

void DoublyLinkedList::get(int index) {
    int val;
    Node* temp = head ;
    if(index<0 || index>=length){return;}
    if(index == 0){getHead();}
    else if(index == length-1){getTail();}
    else{
        for(int i = 0;i<=index;i++){
            val = head->next->value;
        }
        cout<<val<<endl;
    }


}



