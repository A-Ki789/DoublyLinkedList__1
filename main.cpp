#include <iostream>
#include "DoublyLinkedList.h"
#include "Node.h"

int main(){
    auto* newList = new DoublyLinkedList(34);
    newList->append(23);
    newList->append(11111);

    newList->get(2);
    return 0;

}