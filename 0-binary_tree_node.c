#include "binary_trees.h"

/**
 * binary_tree_node - create a new node in the tree
 * @parent: pointer to node parent
 * @value: value field
 * Return: a new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = value;
	new->parent = parent;
	new->left = new->right = NULL;

	return (new);
}
