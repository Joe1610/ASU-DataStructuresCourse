#include "TreeNode.h"
template <class T>
TreeNode<T>::TreeNode(T newValue) {
	data = newValue;
	left = right = nullptr;
}
