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

if (tree == NULL)
return (0);

int left_height = binary_tree_height(tree->left);
int right_height = binary_tree_height(tree->right);

return (1 + (left_height > right_height ? left_height : right_height));

if (tree == NULL)
return (0);

int left_height = binary_tree_height(tree->left);
int right_height = binary_tree_height(tree->right);

return (left_height - right_height);
}
