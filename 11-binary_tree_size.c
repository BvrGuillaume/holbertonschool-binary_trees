#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_size - Calculate the size of a binary tree
 * @tree: Pointer to the root node
 * Return: The size of the tree or NULL or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	 left = binary_tree_size(tree->left);
	 right = binary_tree_size(tree->right);

	return (left + right + 1);
}
