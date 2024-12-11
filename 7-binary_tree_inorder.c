#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_preorder - Traverses the tree in preorder
 * @tree: Pointer to root of tree.
 * @func: The pointer that moves through the nodes
 *
 * Return: content of each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

func(tree->n);
binary_tree_preorder(tree->left, func);
printf("%d", tree->n);
binary_tree_preorder(tree->right, func);

}
