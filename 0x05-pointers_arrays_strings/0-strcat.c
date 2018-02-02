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
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: what to add to the destination string
 *
 * Return: pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int length = str_length(dest);

	for (i = 0; src[i] != '\0'; i++)
		dest[length++] = src[i];

	return (dest);
}
