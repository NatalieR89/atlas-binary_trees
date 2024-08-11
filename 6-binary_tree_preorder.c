#include "binary_trees.h"

/**
 *binary_tree_preorder - is a type of tree traversal
 *@tree: the tree we're calling
 *@func:a func call for the tree
 *Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
