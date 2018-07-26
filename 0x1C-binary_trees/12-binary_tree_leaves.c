#include "binary_trees.h"
/**
 * binary_tree_leaves - check if node is leaf
 * @tree: input tree node
 * Return: returns 1 for leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left)
		+ binary_tree_leaves(tree->right));
}
