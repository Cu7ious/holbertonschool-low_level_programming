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
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);

#endif /* _DOG_H_ */
