#include "lists.h"

/**
 * _strlen - calculates the length of a string s
 * @s: the string constant
 *
 * Return: the length of the stging, int
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the linked list
 * @str: string to add
 *
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (node);

	node->str = strdup(str);
	node->next = NULL;
	node->len = _strlen(str);

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = node;

	return (node);
}
