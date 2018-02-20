#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: pointer to a new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;
	dog_t *p;

	dog.name = name;
	dog.age = age;
	dog.owner = owner;

	p = &dog;

	return (p);
}
