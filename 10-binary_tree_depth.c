#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - Calculate the depht of the node
 * @tree: Pointer to the node
 * Return: Depth of the node or NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

if (!tree)
{
	return (0);
}

if (tree->parent)
{
	depth += 1 + binary_tree_depth(tree->parent);
}

return (depth);
}
