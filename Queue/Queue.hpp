/*
Author: Adrian Onofre
Purpose: To write a queue and its functionalities.

*/

#include <iostream>

class Queue {

	int q_array[5] = { 0 };
	int front;
	int rear;
	int count;

public:
	Queue() : front(0), rear(0), count(0) {}

	//Operations of Queue

	bool isEmpty() {

		return front == rear;

	}

	bool isFull() {

		return count == 5;

	}

	void enqueue(int value) {

		if (count == 5) {

			std::cout << "Queue is full!" << std::endl;

		}

		q_array[rear] = value;

		//Formula

		rear = (rear + 1) % 5;

		count++;

	}

	void dequeue() {

		if (count == 0) {

			std::cout << "Queue is empty" << std::endl;

		}

		//Formula

		front = (front + 1) % 5;

		count--;

	}

	int peek() {

		if (isEmpty()) {

			std::cout << "Queue is empty!";
			return NULL;

		}

		return q_array[front];

	}
	
	void print() {

		if (isEmpty()) {

			std::cout << "Queue is empty!" << std::endl;

		}

		std::cout << "Queue elements: ";

		for (int i = 0; i < count; i++) {

			std::cout << q_array[(front + i) % 5] << " ";

		}

		std::cout << std::endl;

	}

};
