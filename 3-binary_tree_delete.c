#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - Delete an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* supprime de la gauche a la droite les branches */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* libère le noeud */
	free(tree);

}
