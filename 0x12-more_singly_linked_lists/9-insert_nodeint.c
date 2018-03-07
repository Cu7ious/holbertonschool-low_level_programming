#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the pointer to a pointer to a head of a list
 * @idx: the index of the position in a list, where new node will be inserted
 * @n: the value for the new node
 *
 * Return: the address of the new node, or NULL (on fail)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *pointer, *node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	if (idx == 0)
	{
		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}

	pointer = *head;
	while (pointer != NULL)
	{
		if (i + 1 == idx)
		{
			node->n = n;
			node->next = pointer->next;
			pointer->next = node;
			return (node);
		}

		pointer = pointer->next;
		i++;
	}

	return (NULL);
}
