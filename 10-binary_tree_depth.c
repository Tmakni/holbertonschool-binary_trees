#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_postorder - Traverses the tree in postorder
 * @tree: Pointer to root of tree.
 * @func: The pointer that moves through the nodes
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
