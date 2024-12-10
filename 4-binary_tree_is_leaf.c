#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_is_leaf - Checks if node is a leaf
 * @node: The node that will be analysed
 *
 * Return: A pointer to the new node, or NULL on failure
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
return (0);

if (node->left == NULL && node->right == NULL)
return (1);

return (0);
}
