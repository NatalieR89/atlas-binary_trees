#include "binary_trees.h"

/**
 *binary_tree_insert_right - sets a node to the right of the parent
 *@parent: parent
 *@value: value
 *Return: return back to parent
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = parent->right;
	parent->right = binary_tree_node(parent, value);
	if (!newNode)
		return (NULL);
	parent->right->right = newNode;
	if (newNode)
		newNode->parent = parent->right;
	return (parent->right);
}
