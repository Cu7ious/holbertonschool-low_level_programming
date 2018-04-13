#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: constant pointer to a head of the dll
 *
 * Return: the number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *hp;
	size_t counter = 0;

	hp = h;

	while (hp)
	{
		hp = hp->next;
		counter++;
	}

	return (counter);
}
