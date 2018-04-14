#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node
 * at index `index` of a dlistint_t linked list
 * @head: a double pointer to a head of a list
 * @index: an index of an element to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *to_free;
	unsigned int count = 0;

	to_free = *head;
	while (to_free != NULL)
	{
		if (count == index)
		{
			if (to_free->next != NULL)
				to_free->next->prev = to_free->prev;

			if (to_free->prev != NULL)
				to_free->prev->next = to_free->next;

			if (*head == to_free)
				*head = (*head)->next;

			free(to_free);
			return (1);
		}

		count++;
		to_free = to_free->next;
	}

	return (-1);
}
