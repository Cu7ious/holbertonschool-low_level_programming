#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a dog data structure
 * @name: dog's name, string
 * @age: dog's age, float
 * @owner: dog Owner's name, string
 *
 * Description: We are building a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
