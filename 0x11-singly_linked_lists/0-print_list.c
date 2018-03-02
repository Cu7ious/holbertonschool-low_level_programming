#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: constant, that passes the linked list
 *
 * Return: number of elements in linked list, uns int
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		count++;
	}

	return (count);
}
