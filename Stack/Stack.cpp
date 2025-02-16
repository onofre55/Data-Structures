/*
Author: Adrian Onofre
Purpose: To test the stack functionalities

*/

#include "Stack.hpp"

int main()
{

    //Creating a Stack object with a given capacity

    Stack s(5);

    //Checking stack size

    std::cout << s.size() << std::endl;

    //Checking if the stack is empty

    std::cout << "Is the stack empty?" << (s.isEmpty() ? " Yes " : " No ") << std::endl;

    //Pushing values into the stack

    s.push(32);

    s.push(5);

    s.push(10);

    s.push(12);

    s.push(15);

    //Checking if the stack is full

    std::cout << "Is the stack full?" << (s.isFull() ? " Yes " : " No ") << std::endl;

    //Print the stack

    s.print();

    //Peeking at the elements

    std::cout << s.peek() << std::endl;

    std::cout << s.pop() << std::endl;

    std::cout << s.peek() << std::endl;

    std::cout << s.pop() << std::endl;

    std::cout << s.peek() << std::endl;

    std::cout << s.pop() << std::endl;

}

