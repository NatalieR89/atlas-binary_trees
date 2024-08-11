#include "binary_trees.h"

/**
 *binary_tree_inorder - is a type of tree traversal
 *@tree: the tree we're calling
 *@func:a func call for the tree
 *Return: nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
