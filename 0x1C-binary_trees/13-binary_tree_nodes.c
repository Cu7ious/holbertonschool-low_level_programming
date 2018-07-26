#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: tree to get size of
 *
 * Return: number of nodes with at least 1 child in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	char one_child = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		one_child = 1;

	return (binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right) + one_child);
}
