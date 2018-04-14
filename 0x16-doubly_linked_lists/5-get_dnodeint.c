#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: a pointer to a doubly linked list
 * @index: an index of an element to return
 *
 * Return: the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int counter = 0;

	temp = head;

	while (temp != NULL)
	{
		if (counter == index)
			break;

		temp = temp->next;
		counter++;
	}

	return (temp);
}
