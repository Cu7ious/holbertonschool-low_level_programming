/**
 * str_length - finds the length of the string
 * @s: the string
 *
 * Return: int, length of the string s
 */
int str_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: what to add to the destination string
 * @n: number of char to concat from the src
 *
 * Return: pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int lenD = str_length(dest);
	int lenS = str_length(src);

	for (i = 0; i <= lenS; i++)
	{
		if (n == i)
			break;

		dest[lenD++] = src[i];
	}

	return (dest);
}
