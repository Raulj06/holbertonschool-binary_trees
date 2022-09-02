#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_1 = 0, h_2 = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		h_1 += 1;
		h_1 += binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		h_2 += 1;
		h_2 += binary_tree_height(tree->right);
	}
	if (h_1 > h_2)
	{
		return (h_1);
	}
	else
	{
		return (h_2);
	}
}
