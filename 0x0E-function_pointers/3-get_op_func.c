#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - switches operations based on input
 * @s: string that contains operator character
 *
 * Return: exit status, int. 0 == OK
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
