#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures
 * the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, x = 0;

	if (!tree || tree == NULL)
		return (0);

	if (tree->left)
		l = 1 + binary_tree_height(tree->left);
	else
		l = 0;

	if (tree->right)
		x = 1 + binary_tree_height(tree->right);
	else
		x = 0;
	return ((l > x) ? l : x);

	return (0);
}
