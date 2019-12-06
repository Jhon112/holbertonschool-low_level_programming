#include "binary_trees.h"
/**
 * binary_tree_depth - measure binary tree depth
 * @tree: a pointer to the root node
 *
 * Return: depth of node, 0 otherwise
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 1;

	if (!tree)
		return (0);

	if (!tree->parent)
		return (0);
	depth += binary_tree_depth(tree->parent);
	return (depth);
}
