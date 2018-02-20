#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory occupied by the instance of a dog_t
 * @d: a pointer to the instance of a dog_t
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);

	free(d);
}
