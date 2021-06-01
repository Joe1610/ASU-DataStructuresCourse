#include "Queue.h"
#include<assert.h>

template <class T>
Queue<T>::Queue(int sizeOfQueue) {
	elements = 0;
	capacity = sizeOfQueue;
	front = back = -1;
	arr = new T[capacity];
}

template <class T>
 Queue<T>::~Queue() {
	delete[] arr;
}

template <class T>
void Queue<T>::Enqueue(T newValue) {
	assert(!IsFull());
	if (elements == 0) {
		front = 0;
	}
	back = ((back + 1) % capacity);
	arr[back] = newValue;
	elements++;
}

template <class T>
void Queue<T>::Dequeue() {
	assert(!IsEmpty());
	if (elements == 1) {
		front = back = -1;
	}
	else {
		front = ((front + 1) % capacity);
	}
	elements--;
}


template <class T>
bool Queue<T>::IsFull() {
	return elements == capacity;
}

template <class T>
bool Queue<T>::IsEmpty() {
	return elements == 0;
}

template <class T>
T Queue<T>::Front() {
	assert(!IsEmpty());
	return arr[front];
}

template <class T>
int Queue<T>::size() {
	return elements;
}


