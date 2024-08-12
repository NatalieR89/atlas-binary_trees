#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of a binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);
	if (tree->l == NULL && tree->r == NULL)
		return (0);
	l = binary_tree_height(tree->l);
	r = binary_tree_height(tree->r);
	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);
	if (tree->l == NULL && tree->r == NULL)
		return (1);
	if (tree->l == NULL || tree->r == NULL)
		return (0);
	l = binary_tree_is_perfect(tree->l);
	right = binary_tree_is_perfect(tree->r);
	if (l == 0 || r == 0)
		return (0);
	if (binary_tree_height(tree->l) == binary_tree_height(tree->r))
		return (1);
	return (0);
}
