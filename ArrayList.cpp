#include "ArrayList.h"
#include <assert.h>

template <class T>
ArrayList<T>::ArrayList() {
	elements = 0;
	capacity = 10;
	arr = new T[capacity];
}

template <class T>
int ArrayList<T>::length() {
	return elements;
}

template <class T>
void ArrayList<T>::Append(T newValue) {
	if (elements == capacity) {
		Expand();
	}
	arr[elements++] = newValue;
}

template <class T>
void ArrayList<T>::Expand() {
	T* newArray = new T[capacity * 2];
	for (int i = 0; i < capacity; i++) {
		newArray[i] = arr[i];
	}
	capacity *= 2;
	delete arr;
	arr = newArray;
}

template <class T>
T ArrayList<T>::at(int index) {
	return arr[index];
}

template <class T>
void ArrayList<T>::insertAt(int index, T newValue) {
	assert(index <= elements && index >= 0);
	if (elements == capacity) {
		Expand();
	}
	for (int i = elements - 1; i > index; i--) {
		arr[i + 1] = arr[i];
	}
	arr[index] = newValue;
	elements++;
}

template <class T>
void ArrayList<T>::deleteAt(int index) {
	assert(elements && index < elements && index >= 0);
	for (int i = index; i < elements - 1; i++) {
		arr[i] = arr[i + 1];
	}
	elements--;
}

template <class T>
ArrayList<T>::~ArrayList() {
	delete arr;
}


