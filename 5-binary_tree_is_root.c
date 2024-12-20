#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is the root of the tree.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is a root, otherwise 0.
 *         If the node is NULL, returns 0.
 *
 * This function checks if the node has no parent, which is a characteristic
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
