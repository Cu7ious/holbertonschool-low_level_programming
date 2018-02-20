#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct Dog - a dog data structure
 * @name: Dog's name, string
 * @age: Dog's age, float
 * @owner: Dog Owner's name, string
 *
 * Description: We are building a dog
 */
struct Dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog - Typedef for struct Dog
 */
typedef struct Dog dog;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
