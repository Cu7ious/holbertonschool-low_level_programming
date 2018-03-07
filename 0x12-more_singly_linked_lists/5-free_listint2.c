#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: the pointer to a pointer of a head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *a, *b;

	if (head == NULL || *head == NULL)
		return;

	a = *head;

	while (a != NULL)
	{
		b = a->next;
		free(a);
		a = b;
	}

	*head = NULL;
}
