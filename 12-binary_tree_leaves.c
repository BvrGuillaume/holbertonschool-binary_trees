#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node
 * Return: The number of leaves in the tree or NULL or 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_left, leaf_right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leaf_left = binary_tree_leaves(tree->left);
	leaf_right = binary_tree_leaves(tree->right);

	return (leaf_left + leaf_right);
}
