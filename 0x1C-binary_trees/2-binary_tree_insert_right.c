#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node with value to right of given node
 * @parent: parent node to insert under
 * @value: value of node node
 *
 * Return: address of the node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->right = parent->right;
	node->left = NULL;
	node->parent = parent;
	parent->right = node;

	if (node->right != NULL)
		node->right->parent = node;

	return (node);
}
