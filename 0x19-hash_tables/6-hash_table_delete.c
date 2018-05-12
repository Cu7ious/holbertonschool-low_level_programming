#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: input hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *holder_inner;
	unsigned int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			holder_inner = current->next;

			free(current->value);
			free(current->key);
			free(current);

			current = holder_inner;
		}
	}

	free(ht->array);
	free(ht);
}
