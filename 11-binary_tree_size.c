#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root
 * Return: size
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree->left) + 1;
	size += binary_tree_size(tree->right);

	return (size);
}
