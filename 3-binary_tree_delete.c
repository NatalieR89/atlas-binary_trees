#include "binary_trees.h"

/**
 *binary_tree_delete - recursivly deletes a tree
 *@tree: the tree to delete
 *Return: not a single thing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);

	binary_tree_delete(tree->right);

	free(tree);
}
