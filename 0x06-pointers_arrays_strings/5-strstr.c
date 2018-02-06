/**
 * _strstr - locates a substring
 * @haystack: where to locate a substring
 * @needle: substring to locate
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL, if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int *match;

	for (i = 0; haystack != '\0'; haystack++)
	{
		i = 0;
		*match = *haystack;

		while (*match == needle[i])
		{
			i++;
			match++;

			if (needle[i] == '\0')
				return (haystack);
		}
	}

	return (0);
}
