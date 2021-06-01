#include "LinkedList.h"
#include <cassert>
#include <iostream>
using namespace std;
Node::Node() {
	data = 0;
	next = nullptr;
}

Node::Node(int value) {
	data = value;
	next = nullptr;
}

LinkedList::LinkedList() {
	head = tail = nullptr;
	size = 0;
}

void LinkedList:: Append(float value) {
	Node* temp = new Node(value);
	if (head == nullptr) {
		head = tail = temp;
	}
	else {
		tail->next = temp;
		tail = tail->next;
	}
	size++;
}

void LinkedList::InsertAt(int val, int pos) {
	assert(pos >= 0 && pos < size);
	Node* tmp = head;
	Node* newNode = new Node(val);
	if (pos == 0) {
		newNode->next = head;
		head = newNode;
	}
	else {
		for (int i = 0; i < pos - 1; i++) {
			tmp = tmp->next;
		}
			newNode->next = tmp->next;
			tmp->next = newNode;
		size++;
	}
}

void LinkedList::DeleteAt(int pos) {
	assert(pos >= 0 && pos < size);
	Node* tmp = head;
	if (pos == 0) {
		head = head->next;
		delete tmp;
	}
	else {
		for (int i = 0; i < pos - 1; i++) {
			tmp = tmp->next;
		}
			Node* del = tmp->next;
			tmp->next = del->next;
			delete del;
			if (pos == size - 1) {
				tail = tmp;
			}
	}
	size--;
}

void LinkedList::Display() {
	Node* temp = head;
	while (temp != nullptr) {
		cout << temp->data;
		if (temp->next != nullptr) {
			cout << " -> ";
		}
		temp = temp->next;
	}
	cout << endl;
}

void LinkedList::AlternatingSplit() {
	Node* temp = head;
	LinkedList first, second;
	int i = 0;
	while (temp != nullptr) {

		if (i % 2) {
			first.Append(temp->data);
		}
		else {
			second.Append(temp->data);
		}

		// To print the original list
		cout << temp->data;
		if (temp->next != nullptr) {
			cout << " -> ";
		}

		i++;
		temp = temp->next;
	}
	cout << endl;
	first.Display();
	second.Display();
}