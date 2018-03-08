#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: the pointer to a pointer to a head of the list
 *
 * Return: a pointer to the first node of the reversed list
 *
 * More:
 * You are not allowed to use more than 1 loop.
 * You are not allowed to use malloc, free or arrays
 * You can only declare a maximum of two variables in your func
 */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *first, *rest;

	if (head == NULL || *head == NULL)
		return (NULL);

	first = *head;
	rest = first->next;

	if (rest == NULL)
		return (NULL);

	reverse_listint(&rest);
	first->next->next = first;

	first->next = NULL;

	*head = rest;
	return (*head);
}
