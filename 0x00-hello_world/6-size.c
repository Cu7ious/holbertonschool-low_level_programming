#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main (void)
{
	char _char;
	int  _int;
	long _long;
	long long _long_long;
	float _float;

	_char = sizeof(_char);
	_int = sizeof(_int);
	_long = sizeof(_long);
	_long_long = sizeof(_long_long);
	_float = sizeof(_float);

	printf("Size of a char: %u byte(s)\n", _char);
	printf("Size of an int: %u byte(s)\n", _int);
	printf("Size of a long int: %lu byte(s)\n", _long);
	printf("Size of a long long int: %Lu byte(s)\n", _long_long);
	printf("Size of a float: %i byte(s)\n", (int) _float);

	return (0);
}
