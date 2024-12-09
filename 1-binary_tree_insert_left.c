#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_insert_left - insert a node to the left child
 * @parent: Pointer to the parent node
 * @value: value to store in the new node
 * Return: Pointer to the created node, or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	/*créer un nouveau noeud*/
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;

	/* Maj de l'enfant de gauche du parent */
	if (parent->left != NULL)
		parent->left->parent = new_node;
	parent->left = new_node;

	return (new_node);
}
