#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_postorder - Traverses the tree in postorder
 * @tree: Pointer to root of tree.
 * @func: The pointer that moves through the nodes
 *
 * Return: content of each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
