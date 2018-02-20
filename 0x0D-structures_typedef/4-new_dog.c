#include <stdlib.h>
#include "dog.h"

/**
 * len - calculates the length of a string
 * @s: string
 *
 * Return: length of a string, int
 */
int len(char *s)
{
	unsigned int l = 0;

	while (s[l] > '\0')
		l++;

	return (l);
}

/**
 * save_string - saves the characters from string s to string t
 * @s: source string
 * @t: target string
 * @l: length of the string s
 *
 * Return: pointer to a string
 */
char *save_string(char *s, char *t, int l)
{
	t[l] = '\0';
	while (l >= 0)
	{
		t[l] = s[l];
		l--;
	}

	return (t);
}

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
	dog_t *p;
	char *n_name, *n_owner;
	int len_name, len_owner;
	unsigned int size_of_char;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);

	size_of_char = sizeof(char);

	len_name = len(name);
	len_owner = len(owner);

	n_name = malloc(len_name * size_of_char + 1);
	n_owner = malloc(len_name * size_of_char + 1);

	if (n_name == NULL || n_owner == NULL)
	{
		free(p);
		free(n_name);
		free(n_owner);

		return (NULL);
	}

	n_name = save_string(name, n_name, len_name);

	n_owner = save_string(owner, n_owner, len_owner);

	p->name = n_name;
	p->age = age;
	p->owner = n_owner;

	return (p);
}
