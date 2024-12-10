#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 *
 * This function recursively deletes each node of the binary tree
 * starting from the leaves up to the root, freeing memory at each step.
 * If the tree is NULL, the function does nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
