
/*
Author: Adrian Onofre
Purpose: To test the queue functionalities

*/

#include "Queue.hpp"

int main()
{
    Queue q;

    std::cout << "Is the queue empty?" << (q.isEmpty() ? " Yes " : " No ") << std::endl;

    q.enqueue(32);
    q.enqueue(54);
    q.enqueue(23);
    q.enqueue(10);
    q.enqueue(38);

    q.print();

    q.dequeue();

    q.print();

    std::cout << "Is the queue full?" << (q.isFull() ? " Yes " : " No ") << std::endl;

    std::cout << q.peek() << std::endl;

}

