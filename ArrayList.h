#pragma once
template <class T>
class ArrayList
{
	T* arr;
	int capacity, elements;
public:
	ArrayList();
	int length();
	void Append(T newValue);
	void Expand();
	T at(int index);
	void insertAt(int index, T newValue);
	void deleteAt(int index);
	~ArrayList();
};

