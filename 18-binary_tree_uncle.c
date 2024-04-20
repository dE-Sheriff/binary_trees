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
	return (node->parent->left);
}

/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: Pointer to uncle node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || !(node->parent))
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
