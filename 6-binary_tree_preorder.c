#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_preorder - Traverses the tree in preorder
 * @tree: Pointer to root of tree.
 * @func: The pointer that moves through the nodes
 *
 * Return: content of each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

if (tree == NULL)
return;

func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);

}
