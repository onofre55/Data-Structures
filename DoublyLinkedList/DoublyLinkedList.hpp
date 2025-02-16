/*
Author: Adrian Onofre
Purpose: To write a double linked list and its functionalities.

*/

#include <iostream>

class DoublyLinkedList {

	struct Node {

		Node* next;
		Node* prev;
		int data;
		Node(int value) : data(value), next(nullptr), prev(nullptr) {}


	};

private:
	Node* head; //pointer to the first node in the list
	Node* tail; //pointer to the last node in the list

public:
	DoublyLinkedList() : head(nullptr), tail(nullptr) {}

	//Operations

	bool isEmpty() {

		return head == nullptr;

	}

	//adding a Node to the end of the list
	//adjustment needed for the doubly linked list

	void append(int value) {

		Node* newNode = new Node(value);

		if (isEmpty()) {

			head = tail = newNode;

		}
		else {

			tail->next = newNode;
			newNode->prev = tail;
			tail = newNode;

		}

	}

	//adding a Node to the front of the list
	//update head->prev to newNode
	//then update head to newNode

	void prepend(int value) {

		Node* newNode = new Node(value);

		if (isEmpty()) {

			head = tail = newNode;

		}
		else {

			newNode->next = head;
			head->prev = newNode;
			//update the head pointer to point to the newNode(newHead)
			head = newNode;

		}


	}

	//print values

	void print() {

		Node* current = head;
		while (current != nullptr) {

			std::cout << current->data << " -> ";
			current = current->next;
		}

		std::cout << "nullptr\n";

	}

};