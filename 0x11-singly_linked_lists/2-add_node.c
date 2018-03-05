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
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the linked list
 * @str: string to add
 *
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (node);

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (node);
	}

	node->len = _strlen(str);
	node->next = *head;
	*head = node;

	return (*head);
}
