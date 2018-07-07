#include "binary_trees.h"


/**
 * binary_tree_depth - measure the depth of a node in a binary tree
 * @tree: a node
 *
 * Return: depth of a node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *ptr = (binary_tree_t *) tree;

	if (tree == NULL)
		return (0);

	while (ptr->parent != NULL)
	{
		depth++;
		ptr = ptr->parent;
	}

	return (depth);
}
