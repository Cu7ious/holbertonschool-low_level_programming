#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: constant pointer to the head of the dll
 *
 * Return: number of nodes in dll
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *hp;
	size_t counter;

	hp = h;
	counter = 0;

	while (hp != NULL)
	{
		printf("%d\n", hp->n);
		hp = hp->next;
		counter++;
	}

	return (counter);
}
