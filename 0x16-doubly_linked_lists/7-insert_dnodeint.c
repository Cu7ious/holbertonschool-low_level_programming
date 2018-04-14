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
	dlistint_t *node, *temp;
	unsigned int counter = 0;

	if (h == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	temp = *h;
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	while (temp != NULL)
	{
		if (counter == idx)
		{
			node->next = temp;
			node->prev = temp->prev;
			temp->prev->next = node;
			break;
		}

		temp = temp->next;
		counter++;
	}

	return (counter == idx ? node : NULL);
}
