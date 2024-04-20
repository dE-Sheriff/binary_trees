#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling -  a function that finds the sibling of a node
 * @node: The one to find sibling for
 * Return: the pointer to the siblin
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || !(node->parent))
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	if (node == node->parent->right)
		return (node->parent->left);
}
