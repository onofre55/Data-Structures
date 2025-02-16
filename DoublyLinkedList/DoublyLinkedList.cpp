/*
Author: Adrian Onofre
Purpose: To test the doubly linked list functionalities

*/

#include "DoublyLinkedList.hpp"

int main()
{
    DoublyLinkedList listD;

    std::cout << "Is the doubly linked list empty?" << (listD.isEmpty() ? " Yes " : " No ") << std::endl;

    listD.append(5);
    listD.append(2);
    listD.append(10);
    listD.append(3);
    listD.append(6);

    listD.print();

    std::cout << "Is the doubly linked list empty?" << (listD.isEmpty() ? " Yes " : " No ") << std::endl;

    listD.prepend(22);

    listD.print();



}