#include <stdio.h>
#include "holberton.h"

int _pow(int n, int exp)
{
	int i;
    int r = 1;

    for (i = 0; i < exp; ++i)
        r *= n;

    return (r);
}

int ascii_to_digit(char c)
{
	const unsigned int ASCII_DIF = 48;
	return ((c - '\0') - ASCII_DIF);
}

/**
 * _atoi - convert a string to an integer
 * @s: string of characters
 *
 * Return: integer, number converted from the string *s
 */
int _atoi(char *s)
{
	unsigned int beg, end;
	unsigned int length;
	unsigned int i;
	char sign_char;
	int sign_modifier;
	int res_num = 0;
	int nlen = 0;

	// gets the length of a string s
	length = 0;
	while (s[length] != '\0')
		length++;

	// finds the beginning of number in string s
	for (i = 0; i < length; i++)
		if (s[i] >= '0' && s[i] <= '9')
		{
			beg = i;
			break;
		}

	// finds the end of number in string s
	end = length - 1;
	for (i = beg + 1; i < length; i++)
		if (s[i] < '0' && s[i] > '9')
		{
			end = i - 1;
			break;
		}

	// finds the sign of number
	sign_char = beg == 0 ? '+' : s[beg - 1];
	sign_modifier = sign_char != '-' ? 1 : -1;

	for (i = beg; i < end; i++)
		nlen++;

	/* printf("nlen: %d\n", nlen); */

	// computes the resulted number
	for (i = beg; i <= end; i++)
	{
		if (i < end)
		{
			res_num = res_num + (ascii_to_digit(s[i]) * _pow(10, nlen));
		}
		else
		{
			res_num = res_num + ascii_to_digit(s[i]);
		}

		if (i == end)
			res_num = res_num * sign_modifier;
		nlen--;
	}
	/* #<{(| printf("_pow(2,4) = %d\n", _pow(2,4)); |)}># */
	/* printf("Sign char: %c\n", sign_char); */
	/* printf("Sign modifier: %d\n", sign_modifier); */
	/* printf("First char: %c\n", s[0]); */
	/* printf("Last char: %c\n", s[end]); */
	/* printf("length: %d\n", length); */
	/* printf("beg idx = %d\nend idx = %d\n", beg, end); */

	return (res_num);
}
