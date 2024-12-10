#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - Count the nodes with atleast 1 child in a binary tree
 * @tree: Pointer to the root node
 * Return: the number of nodes with atleast 1 child or NULL or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
