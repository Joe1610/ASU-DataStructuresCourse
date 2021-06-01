#pragma once
#include "TreeNode.h"
template <class T>
class BinarySearchTree
{
	TreeNode<T>* root;
	int size;
public:
	BinarySearchTree();
	void insert(T newValue);
	bool find(T value);
	int getLevel(T value);
};

