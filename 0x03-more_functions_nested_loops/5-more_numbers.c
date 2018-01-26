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

	for (ten_times = 0; ten_times <= 10; ten_times++)
	{
		for (fourteen = 0; fourteen <= 14; fourteen++)
		{
			if (fourteen < 10)
			{
				_putchar(fourteen + '0');
			}
			else
			{
				_putchar(fourteen / 10 + '0');
				_putchar(fourteen % 10 + '0');
			}

		}
		_putchar('\n');
	}
}
