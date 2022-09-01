#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a new node as a right oriented child
 * @parent: root node
 * @value: n value to populate the child
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
		return (NULL);

	right_node = malloc(sizeof(binary_tree_t));

	if (right_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}

	else
	{
		right_node->right = NULL;
	}

	right_node->parent = parent;
	right_node->n = value;
	right_node->left = NULL;
	parent->right = right_node;

	return (right_node);
}
