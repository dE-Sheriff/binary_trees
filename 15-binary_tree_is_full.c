#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if
 * a binary tree is full
 * @tree: pointer to the root node of the tree
 * Return: 1 for full 0 for incomplete
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->right)
		&& binary_tree_is_full(tree->left));
}