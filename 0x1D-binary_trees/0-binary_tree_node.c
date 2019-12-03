#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree
 * @parent: pointer to a parent node
 * @value: value to put in new node
 *
 * Return: pointer to new node, null otherwise
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;

	return (new);
}
