#include "lists.h"

/**
 * get_nodeint_at_index -
 * @head: the pointer to a head of a linked list
 * @index: the index of a node to return
 *
 * Return: pointer to a linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count <= index; count++)
	{
		if (head == NULL)
			return (NULL);

		if (count == index)
			return (head);

		head = head->next;
	}

	return (head);
}
