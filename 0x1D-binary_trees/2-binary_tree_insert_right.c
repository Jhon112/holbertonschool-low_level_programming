#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as right child
 * @parent: parent node
 * @value: value of node
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right)
		new->right = binary_tree_insert_right(new,
					     parent->right->n);
	parent->right = new;
	return (new);
}
