#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the pointer to a pointer to a head of a linked list
 *
 * Return: the head node’s data (n), int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int result = 0;

	if (*head == NULL)
		return (result);

	temp = *head;
	result = (*head)->n;
	*head = temp->next;

	free(temp);

	return (result);
}
