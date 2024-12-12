#include <stdlib.h>
#include "13-main.c"

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

	 binary_tree_nodes(tree->left);
	 binary_tree_nodes(tree->right);

	return (count);
}
