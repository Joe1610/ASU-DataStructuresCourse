#pragma once
template <class T>
class Queue
{
	int elements, capacity, front, back;
	T* arr;
public:
	Queue(int sizeOFQueue);
	void Enqueue(T newValue);
	void Dequeue();
	int size();
	bool IsFull();
	bool IsEmpty();
	T Front();
	~Queue();
};

