#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodes_helper - cteates the linked list for the test
 * @head: double pointer to the head of the list
 *
 * Return: void
 */
void add_nodes_helper(dlistint_t **head)
{
	add_dnodeint_end(&(*head), 0);
	add_dnodeint_end(&(*head), 1);
	add_dnodeint_end(&(*head), 2);
	add_dnodeint_end(&(*head), 3);
	add_dnodeint_end(&(*head), 4);
	add_dnodeint_end(&(*head), 98);
	add_dnodeint_end(&(*head), 402);
	add_dnodeint_end(&(*head), 1024);
}

/**
 * print_and_delete_helper - prints the test list
 * and deletes the first element from it
 * @head: double pointer to the head of the list
 *
 * Return: void
 */
void print_and_delete_helper(dlistint_t **head)
{
	print_dlistint(*head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&(*head), 0);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;
	unsigned int i = 15;

	head = NULL;

	add_nodes_helper(&head);

	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 5);

	while (i)
	{
		print_and_delete_helper(&head);
		i--;
	}

	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);

	return (0);
}
