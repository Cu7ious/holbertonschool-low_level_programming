#include "binary_trees.h"

/**
 * height - helper that gets a height of a binary tree
 * @tree: tree to get a height of
 *
 * Return: the height of a tree
 */
size_t height(const binary_tree_t *tree)
{
	size_t h_left = 0;
	size_t h_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		h_left = height(tree->left);

	if (tree->right != NULL)
		h_right = height(tree->right);

	if (h_left > h_right)
		return (h_left + 1);

	return (h_right + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a tree to check
 *
 * Return: the balance factor of a tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height(tree->left) - height(tree->right));
}
