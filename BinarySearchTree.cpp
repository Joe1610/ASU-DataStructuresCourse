#include "BinarySearchTree.h"
#include "TreeNode.h"
#include <iostream>
using namespace std;

template <class T>
BinarySearchTree<T>::BinarySearchTree() {
	size = 0;
	root = nullptr;
}

template <class T>
void BinarySearchTree<T>::insert(T newValue) {
	if (root == nullptr) {
		root = new TreeNode<T>(newValue);
		size++;
		return;
	}
	TreeNode<T>* ptr = root;
	TreeNode<T>* parentPtr = root;
	while (ptr != nullptr) {
		if (newValue < ptr->data) {
			parentPtr = ptr;
			ptr = ptr->right;
		}
		else if (newValue > ptr->data) {
			parentPtr = ptr;
			ptr = ptr->left;
		}
		else {
			cout << "The value is already exist\n";
			return;
		}
	}
	ptr = new TreeNode<T>(newValue);
	if (newValue > parentPtr->data) {
		parentPtr->right = ptr;
	}
	else {
		parentPtr -> left = ptr;
	}
	size++;
}

template <class T>
bool BinarySearchTree<T>::find(T value) {
	TreeNode<T>* ptr = root;
	while (ptr != nullptr) {
		if (value < ptr->data) {
			ptr = ptr->left;
		}
		else if (value > ptr->data) {
			ptr = ptr->right;
		}
		else {
			return true;
		}
	}
	return false;
}

template <class T>
int BinarySearchTree<T>::getLevel(T value) {
	TreeNode<T>* tmp = root;
	int lvl = 0;
	while (tmp != nullptr) {
		if (tmp->data == value) {
			return lvl;
		}
		else if (tmp->data < value) {
			tmp = tmp->right;
			lvl++;
		}
		else {
			tmp = tmp->left;
			lvl++;
		}
	}
	return -1;
}
