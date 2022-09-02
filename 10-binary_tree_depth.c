#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d_node = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent != NULL)
	{
		d_node += 1;
		d_node += binary_tree_depth(tree->parent);
	}
	return (d_node);
}
