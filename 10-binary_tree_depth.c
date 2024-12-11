#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_depth - Returns the depth of nodes
 * @tree: Pointer to root of tree.
 *
 * Return: content of each node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;

if (tree == NULL)
return (0);

while (tree->parent != NULL)
{
depth++;
tree = tree->parent;
}
return (depth);
}
