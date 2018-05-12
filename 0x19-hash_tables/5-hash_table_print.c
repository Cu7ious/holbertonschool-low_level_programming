#include "hash_tables.h"

/**
 * hash_table_print - print the entire hash table
 * @ht: input hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nodes = NULL;
	unsigned int i = 0;
	char *string = "";

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		nodes = ht->array[i];

		if (nodes != NULL)
			printf("%s", string);

		while (nodes != NULL)
		{
			printf("'%s': '%s'", nodes->key, nodes->value);
			if (nodes->next != NULL)
				printf("%s", string);
			nodes = nodes->next;
			string = ", ";
		}
	}

	printf("}\n");
}
