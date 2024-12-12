#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of leaves
 * @tree: Pointer to root of tree.
 *
 * Return: content of each node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		count++;
	}

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
