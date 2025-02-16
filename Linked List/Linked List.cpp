
/*
Author: Adrian Onofre
Purpose: To test the linked list functionalities

*/

#include "LinkedList.hpp"

int main()
{
    LinkedList list;

    list.append(3);
    list.append(2);
    list.append(7);
    list.append(10);

    list.print();

    std::cout << list.getSize() << std::endl;

    std::cout << "Is the list empty?" << (list.isEmpty() ? " Yes " : " No ") << std::endl;

    list.remove();

    list.print();

    list.prepend(3);

    list.print();
}

