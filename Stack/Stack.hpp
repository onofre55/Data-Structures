#include <iostream>
#include <stdexcept>

/*
Author: Adrian Onofre
Purpose: To write a stack and its functionalities.

Write these operations for the class:
 destructor
 size
 empty
 full
 push
 pop
 peek
 print

*/

class Stack {

private:

	int* array;
	int top;
	int capacity;


public:

	//Constructor

	Stack(int size) : top(-1), capacity(size), array(new int[size]) {}

	//Destructor

	~Stack(){

		delete[] array;

	}

	//Operations

	int size() {

		return top + 1;

	}

	bool isEmpty() {

		return top == -1;

	}

	bool isFull() {

		return top == capacity - 1;

	}

	void push(int value) {

		if (top == capacity - 1) {

			std::cout << ("Stack is full!");

		}

		array[++top] = value;

	}

	int pop() {

		if (isEmpty()) {

			std::cout << ("Stack is empty!");

		}

		return array[top--];

	}

	int peek() {

		if (isEmpty()) {

			std::cout << "Stack is empty!";
			return -1;

		}

		return array[top];

	}

	void print() {

		if (isEmpty()) {

			std::cout << "Stack is empty!";
			return;

		}

		for (int i = top; i >= 0; i--) {

			std::cout << array[i] << " , ";

		}

		std::cout << std::endl;

	}
};
