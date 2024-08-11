#include "binary_trees.h"

/**
 *binary_tree_is_leaf - is this a leaf
 *@node: is this a node
 *Return: return one or zero
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left != NULL || node->right != NULL)
		return (0);
	else
		return (1);
	return (0);
}
