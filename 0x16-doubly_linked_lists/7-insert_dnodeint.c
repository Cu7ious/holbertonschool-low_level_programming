#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to a head of a list
 * @idx: index of the position of where to insert a new node
 * @n: a value of a new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *current;
	unsigned int c = 0;

	if (h == NULL)
		return (NULL);

	current = *h;

	if (idx == 0)
		return (add_dnodeint(h, n)); /* at 0 */

	while (current && c < idx)
	{
		current = current->next;
		c++;
	}

	if (!current && c == idx)
		return (add_dnodeint_end(h, n)); /* at the end */
	else if (current && c == idx)
	{
		node = malloc(sizeof(dlistint_t));
		if (!node)
			return (NULL);

		/* new node */
		node->n = n;
		node->prev = current->prev;
		node->next = current;

		/* links to prev & next */
		current->prev->next = node;
		current->prev = node;

		return (node);
	}

	return (NULL);
}
