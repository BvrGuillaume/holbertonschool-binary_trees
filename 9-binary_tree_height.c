#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
* binary_tree_height - Calculate the height of a binary tree
* @tree: Pointer to the root node
* @func: Pointer to a function
* Return: Height of the tree or NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return (left_height);
	}
	else
		return ((left_height > right_height ? left_height : right_height) + 1);
}
