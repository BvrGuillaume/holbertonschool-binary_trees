#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - Check if the node is a root
 * @node: Pointer to the node to check
 * Return: 1 if node is a root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0); /* NULL si le noeud n'est pas une racine */

	if (node->parent == NULL)
		return (1); /* Le noeud est une racine */

	return (0); /* Le noeud est une racine */
}
