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
	int i, j;
	int match = 0;

	for (i = 0; haystack[i] > '\0';)
	{
		match = i;

		while (haystack[i] == needle[j]
			&& haystack[i] != '\0'
			&& needle[j] != '\0')
		{
			i++;
			j++;
		}

		if (needle[j] == '\0')
			return (haystack + match);

		i = match + 1;
	}

	return (0);
}
