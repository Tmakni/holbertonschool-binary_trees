#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_inorder - Traverses the tree in inorder
 * @tree: Pointer to root of tree.
 * @func: The pointer that moves through the nodes
 *
 * Return: content of each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;


binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);

}
