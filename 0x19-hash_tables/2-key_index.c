#include"hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: input key
 * @size: input size
 *
 * Return: the index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key) % size;

	return (i);
}
