#include "binary_trees.h"
/**
 * binary_tree_height - measure binary tree height
 * @tree: a pointer to the root node
 *
 * Return: size of node, 0 otherwise
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 1;
	size_t left_size = 0;
	size_t right_size = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	left_size += binary_tree_height(tree->left);
	right_size += binary_tree_height(tree->right);
	height += (right_size > left_size) ? right_size : left_size;
	return (height);
}
