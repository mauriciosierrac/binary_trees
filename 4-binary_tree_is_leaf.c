#include "binary_trees.h"

/**
 * binary_tree_is_leaf - verify if is leaf
 * @node: pointer to node
 * Return: 1 if not a leaft or 0 if a leaft
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left != NULL || node->right != NULL)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
