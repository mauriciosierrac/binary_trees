#include "binary_trees.h"

/**
 * binary_tree_size - leng of tree
 * @tree: pointer to binary tree
 * Return: 0 if is null
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
	}
}
