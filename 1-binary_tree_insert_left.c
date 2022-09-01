#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a new node as a left oriented child node
 * @parent: the root
 * @value: n value to new node
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
		return (NULL);

	left_node = malloc(sizeof(binary_tree_t));

	if (left_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}
	else
	{
		left_node->left = NULL;
	}

	left_node->parent = parent;
	left_node->n = value;
	left_node->right = NULL;
	parent->left = left_node;


	return (left_node);
}
