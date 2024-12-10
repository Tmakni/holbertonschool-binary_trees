#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - Creates a new binary tree node on the right
 * @parent: A pointer to the parent node
 * @value: The value to store in the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node_right = malloc(sizeof(binary_tree_t));

if (parent == NULL)
return (NULL);

new_node_right->n = value;
new_node_right->parent = parent;
new_node_right->right = NULL;
new_node_right->left = NULL;

if (parent->right != NULL)
{
new_node_right = parent->right;
parent->right->parent = new_node_right;
}

parent->right = new_node_right;

return (new_node_right);

}
