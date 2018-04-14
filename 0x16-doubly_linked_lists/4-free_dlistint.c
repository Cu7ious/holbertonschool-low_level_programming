#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: a pointer to a doubly linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp);
	}
}
