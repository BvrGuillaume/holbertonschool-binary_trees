#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
* binary_tree_height - calculate the height of a binary tree
* @tree: Pointer to the root node
* Return: the height of the tree or NULL or 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
* binary_tree_balance - Calculate the balance factor of a binary tree
* @tree: Pointer to the root
* Return: The balance factor or NULL or 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);

}