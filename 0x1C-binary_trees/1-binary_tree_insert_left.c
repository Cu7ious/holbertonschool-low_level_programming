#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent node on where to insert
 * @value: value of the node
 *
 * Return: address of the node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->left = parent->left;
	node->right = NULL;
	node->parent = parent;
	parent->left = node;

	if (node->left != NULL)
		node->left->parent = node;

	return (node);
}
