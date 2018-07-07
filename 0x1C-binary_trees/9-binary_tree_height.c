#include "binary_trees.h"

/**
 * find_height - find height of binary tree recursively
 *
 * @tree: tree to find height of
 * @height: height of tree
 *
 * Return: height of tree. 0 if NULL
 */
size_t height_seeker(const binary_tree_t *tree, size_t h)
{
	size_t h_left, h_right;

	if (tree == NULL)
		return (h);

	h++;

	h_left = height_seeker(tree->left, h);
	h_right = height_seeker(tree->right, h);

	if (h_left > h_right)
		return (h_left);

	return (h_right);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: root of tree
 *
 * Return: height of a tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height_seeker(tree, 0) - 1);
}
