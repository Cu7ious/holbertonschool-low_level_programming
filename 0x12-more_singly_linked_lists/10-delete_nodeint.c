#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * the index of a listint_t linked list
 * @head: the pointer to a pointer to a head of a list
 * @index: the index of an element to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pointer, *del;
	unsigned int i = 0;

	pointer = *head;

	if (pointer == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(pointer);
		return (0);
	}

	while (pointer != NULL && i <= index)
	{
		if (i + 1 == index)
		{
			del = pointer->next;
			pointer->next = (del != NULL)
				? pointer->next->next
				: NULL;

			if (del != NULL)
			{
				free(del);
				return (1);
			}
		}

		pointer = pointer->next;
		i++;
	}

	return (-1);
}
