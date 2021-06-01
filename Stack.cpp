#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack() {
	elements = 0;
	capacity = 10;
	arr = new int[capacity];
	sum = 0;
}

Stack::Stack(int sizeOfStack) {
	elements = 0;
	capacity = sizeOfStack;
	arr = new int[capacity];
	sum = 0;
}

void Stack::push(int newValue) {
	if (capacity == elements) {
		expand();
	}
	arr[elements++] = newValue;
	sum += newValue;
}

void Stack::pushSumOfLastTwo() {
	if (capacity == elements) {
		expand();
	}
	arr[elements] = arr[elements - 1] + arr[elements - 2];
	sum += arr[elements++];
}

int Stack::pop() {
	elements--;
	int tmp = arr[elements];
	sum -= tmp;
	return tmp;
}

void Stack::getSum() {
	cout << "The final points are: " << sum << endl;
}

void Stack::expand() {
	int* newArray = new int[capacity * 2];
	for (int i = 0; i < capacity; i++) {
		newArray[i] = arr[i];
	}
	capacity *= 2;
	delete arr;
	arr = newArray;
}

bool Stack::isEmpty() {
	return elements < 1;
}

Stack::~Stack() {
	cout<<"Object deleted" << endl;
}
