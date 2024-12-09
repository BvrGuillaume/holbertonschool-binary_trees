#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_is_leaf - Check if a node is a leaf
 * @node: Pointer to the node
 * Return: 1 if node is leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0); /* NULL si le neud n'est pas une feuille */

	if (node->left == NULL && node->right == NULL)
		return (1); /* Le noeud est une feuille */

	return (0);

}
