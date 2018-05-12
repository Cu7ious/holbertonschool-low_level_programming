#include "hash_tables.h"

/**
 * hash_table_get - gets the value with a key
 * @ht: input hash table
 * @key: input key
 *
 * Return: Null or value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *to_check;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *) key, ht->size);
	to_check = ht->array[idx];

	while (to_check != NULL)
	{
		if (strcmp(key, to_check->key) == 0)
			return (to_check->value);

		to_check = to_check->next;
	}

	return (NULL);
}
