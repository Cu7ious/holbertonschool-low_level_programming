#include "binary_trees.h"

/**
 * perfect_height - gets height of a tree and checks for fullness
 * @tree: tree to check
 *
 * Return: 1 or 0, whether a tree is balanced (Boolean)
 */
int perfect_height(binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left == NULL) != (tree->right == NULL))
		return (0);

	h_left = get_height_perfect(tree->left);
	if (h_left == 0)
		return (0);

	h_right = get_height_perfect(tree->right);
	if (h_right == 0)
		return (0);

	return (h_left + h_right + 1);
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree to check
 *
 * Return: 1 for perfect, 0 for not (Boolean)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left == NULL) != (tree->right == NULL))
		return (0);

	h_left = get_height_perfect(tree->left);
	if (h_left == 0)
		return (0);

	h_right = get_height_perfect(tree->right);
	if (h_right != h_left)
		return (0);

	return (1);
}
