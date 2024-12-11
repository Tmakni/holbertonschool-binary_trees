#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_insert_right - Creates a new binary tree node on the right
 * @parent: A pointer to the parent node
 * @value: The value to store in the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{


if (tree == NULL)
return; 

func(tree->n);
printf("%d\n", tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);

}
