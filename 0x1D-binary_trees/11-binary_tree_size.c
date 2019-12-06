#include "binary_trees.h"
/**
 * binary_tree_size - measure binary tree size
 * @tree: a pointer to the root node
 *
 * Return: size of node, 0 otherwise
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;
	size_t left_size = 0;
	size_t right_size = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left_size += binary_tree_size(tree->left);
	right_size += binary_tree_size(tree->right);
	size += right_size + left_size;
	return (size);
}
