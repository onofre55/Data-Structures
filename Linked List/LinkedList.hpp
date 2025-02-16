/*
Author: Adrian Onofre
Purpose: To write a linked list and its functionalities.

*/

#include <iostream>

class LinkedList {

public:

	struct Node {

		Node* next;
		int data;

		Node(int val) : data(val), next(nullptr) {}

	};

private:

	Node* head;
	Node* tail;
	int size;

public:
	LinkedList() : head(nullptr), tail(nullptr), size(0) {}

	~LinkedList() {

		Node* current = head;

		while (current != nullptr) {

			Node* temp = current;
			current = current->next;
			delete temp;

		}

	}

	int getSize() {

		return size;

	}

	//Operations of Linked List

	bool isEmpty() {

		return head == nullptr;

	}

	//Adding a node to the end of the list

	void append(int value) {

		Node* newNode = new Node(value);

		if (isEmpty()) {

			head = tail = newNode;

		}
		else {

			tail->next = newNode;
			tail = newNode;

		}

		size++;

	}

	//Adding a Node to the front of the list
	void prepend(int value) {

		Node* newNode = new Node(value);
		if (isEmpty()) {

			head = tail = newNode;

		}
		else {

			newNode->next = head;
			//update the head pointer to point to the newNode(newHead)
			head = newNode;

		}
		size++;

	}

	void print() {

		Node* current = head;
		while (current != nullptr) {

			std::cout << current->data << " -> ";
			current = current->next;

		}

		std::cout << " nullptr\n";

	}

	void remove() {

		Node* temp = head;
		head = head->next;
		delete temp;
		size--;

		if (head == nullptr)
			tail = nullptr;

	}

};