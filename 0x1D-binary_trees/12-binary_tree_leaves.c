#include "binary_trees.h"
/**
 * binary_tree_leaves - ounts the leaves in a binary tree
 * @tree: pointer to root node
 *
 * Return: number of leaves, 0 otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 1;

		if (tree == NULL)
			return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (leaves);
}