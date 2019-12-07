#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: root node
 *
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 1;

	if (tree == NULL)
		return (0);

	nodes = binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left);
	if (tree->left != NULL || tree->right != NULL)
		return (nodes + 1);

	return (nodes);
}