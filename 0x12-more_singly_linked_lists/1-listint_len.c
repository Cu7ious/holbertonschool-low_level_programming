#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: a pointer to the linked list
 *
 * Return: the length of a linked list, size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;
	const listint_t *temp;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		size++;
	}

	return (size);
}
