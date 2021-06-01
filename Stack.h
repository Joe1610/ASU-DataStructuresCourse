#pragma once
class Stack
{
	int* arr;
	int capacity, elements, sum;
public:
	Stack();
	Stack(int sizeOFStack);
	void push(int newValue);
	void pushSumOfLastTwo();
	int pop();
	void getSum();
	void expand();
	~Stack();
};

