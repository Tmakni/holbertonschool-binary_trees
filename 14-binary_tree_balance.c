#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_balance - Calculates whether binary tree is balanced
 * @tree: Pointer to root of tree.
 *
 * Return: result of left height minus right height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

return ((left_height > right_height ? left_height : right_height) +1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The balance factor, or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height, right_height;

if (tree == NULL)
return (0);

left_height = (int)binary_tree_height(tree->left);
right_height = (int)binary_tree_height(tree->right);

return (left_height - right_height);
}
