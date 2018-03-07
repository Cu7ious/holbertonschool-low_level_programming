#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the pointer to a pointer to a head of a list
 * @idx: the index of the position in a list, where new node will be inserted
 * @n: the value for the new node
 *
 * Return: the address of the new node, or NULL (on fail)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tempHead;
	listint_t *prevNode;
	listint_t *node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	tempHead = *head;
	for (i = 0; i <= idx; i++)
	{
		if (i + 1 == idx)
			prevNode = tempHead;
		else if (i == idx)
		{
			node = malloc(sizeof(listint_t));
			if (node == NULL)
				return (NULL);

			node->n = n;
			node->next = tempHead;
			prevNode->next = node;

			if (idx == 0)
				*head = node;

			return (node);
		}

		tempHead = tempHead->next;
	}

	return (NULL);
}
