#include "binary_trees.h"

/**
 *binary_tree_depth - counts the height of the tree
 *@tree: is the argumentative tree
 *Return:right and left
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
