#include "sort.h"

/**
 * swap - swaps the elements of a d l list
 * @prev: previous el
 * @curr: current el
 */
void swap(listint_t *prev, listint_t *curr)
{
	curr->prev = prev->prev;
	prev->next = curr->next;
	prev->prev = curr;
	curr->next = prev;

	if (curr->prev)
		curr->prev->next = curr;
	if (prev->next)
		prev->next->prev = prev;
}

/**
 * insertion_sort_list - implementation of the insertion sort
 * @list: the list to sort
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *first;
	int i, c = 0;

	if (list == NULL || (*list) == NULL)
		return;

	first = *list;
	curr = *list;

	while (curr != NULL)
	{
		c++;
		while (curr->prev != NULL)
			if (curr->n < curr->prev->n)
			{
				swap(curr->prev, curr);

				if (curr->prev == NULL)
				{
					first = curr;
					*list = first;
				}

				print_list(*list);
			}
			else
				break;

		for (i = 0; i < c; i++)
			if (i == 0)
				curr = first->next;
			else
				curr = curr->next;
	}
}
