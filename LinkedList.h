#pragma once
class Node
{
public:
	int data;
	Node* next;
	Node();
	Node(int value);
};

class LinkedList
{
	Node* head;
	Node* tail;
	int size;
public:
	LinkedList();
	void Append(float val);
	void InsertAt(int val, int pos);
	void DeleteAt(int pos);
	void Display();
	void AlternatingSplit();
};