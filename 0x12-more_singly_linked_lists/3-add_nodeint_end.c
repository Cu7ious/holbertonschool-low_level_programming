#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to a pointer to a linked list
 * @n: the value for the new node
 *
 * Return: the new node of the list, listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = node;

	return (node);
}
