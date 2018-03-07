#include "lists.h"

/**
 * free_listint - frees a listint_t list (recursively)
 * @head: pointer to a head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_listint(head->next);

	free(head);
}
