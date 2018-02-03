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
 * _strncpy - concatenates two strings
 * @dest: destination string
 * @src: what to add to the destination string
 * @n: number of char to concat from the src
 *
 * Return: pointer to string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/* int lenD = str_length(dest); */
	int lenS = str_length(src);

	for (i = 0; i <= n; i++)
	{
		if (i >= lenS)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}

	return (dest);
}
