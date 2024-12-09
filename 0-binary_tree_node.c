#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - function that create a binary tree node
 * @parent: Pointer to the parent node
 * @value: value to put in the new node
 * Return: Pointer to the new node or NULL if fail
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* allocation de mémoire pour le nouveau noeud */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* initialisation du nouveau noeud */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
