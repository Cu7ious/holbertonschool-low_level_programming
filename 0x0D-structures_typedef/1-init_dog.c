#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to a variable
 * @name: name of a dog, string
 * @age: age of a dog, float
 * @owner: owner of a dog, string
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
