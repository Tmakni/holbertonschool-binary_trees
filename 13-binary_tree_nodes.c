#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - Counts the number of leaves
 * @tree: Pointer to root of tree.
 *
 * Return: content of each node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t count = 1;

	if (tree->left != NULL && tree->right != NULL)
	{
		count = 1;
	}

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
