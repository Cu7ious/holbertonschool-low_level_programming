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
	int match = -1;

	for (i = 0; needle[i] > '\0'; i++)
		for (j = match < 0 ? 0 : match + i; haystack[j] > '\0'; j++)
		{
			if (needle[i] == haystack[j] && match < 0)
			{
				match = j;
				break;
			}

			if (needle[i] == haystack[j])
				break;

			if (match > 0 && needle[i] != haystack[j])
				return (0);
		}

	return (haystack + match);
}
