#include "holberton.h"

/**
 * more_numbers - 10 times the numbers, from 0 to 14
 * followed by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int ten_times;
	int fourteen;
	int first_char;

	for (ten_times = 0; ten_times <= 10; ten_times++)
	{
		for (fourteen = 0; fourteen <= 14; fourteen++)
		{
			first_char = fourteen < 10 ? fourteen : fourteen / 10;

			_putchar(first_char + '0');

			if (fourteen > 9)
				_putchar(fourteen % 10 + '0');

		}
		_putchar('\n');
	}
}
