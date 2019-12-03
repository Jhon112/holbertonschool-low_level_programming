#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as left child
 * @parent: parent node
 * @value: value of node
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->right = NULL;
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	if (parent->left)
	{
		parent->left->parent = new;
		new->left = parent->left;
	}
	parent->left = new;
	return (new);
}
