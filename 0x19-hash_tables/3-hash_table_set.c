#include "hash_tables.h"

/**
 * hash_table_set - creates the nodes for a hash table
 * @ht: input hash table
 * @key: input key
 * @value: input value
 *
 * Return: bool
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new = NULL, *ckey = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);
	ckey = ht->array[idx];

	while (ckey != NULL)
	{
		if (strcmp(key, ckey->key) == 0)
		{
			free(ckey->value);
			ckey->value = strdup(value);
			return (1);
		}
		ckey = ckey->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}

	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}

	new->next = NULL;
	if (ht->array[idx] != NULL)
		new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
