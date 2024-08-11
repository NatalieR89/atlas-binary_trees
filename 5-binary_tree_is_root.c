#include "binary_trees.h"

/**
 *binary_tree_is_root - if the node is the root
 *@node: this is the node
 *Return: return a whole lot
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
