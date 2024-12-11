#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
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
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 * Return: 1 if tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left != right)
		return (0);

	return (binary_tree_is_perfect(tree->left)
	 && binary_tree_is_perfect(tree->right));

}
