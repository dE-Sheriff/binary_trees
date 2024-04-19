#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a
 * node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return:  a pointer to the created node, or
 * NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = parent->right;
	new_node->left = NULL;
	parent->right = new_node;
	if (new_node->right)
		new_node->right->parent = new_node;
	return (new_node);
}
