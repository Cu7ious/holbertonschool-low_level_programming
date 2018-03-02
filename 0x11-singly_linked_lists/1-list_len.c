#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: constant, that passes the linked list
 *
 * Return: number of elements in linked list, uns int
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
