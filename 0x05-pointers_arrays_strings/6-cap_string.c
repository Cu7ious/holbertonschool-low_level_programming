/**
 * cap_string - capitalizes all words of a string
 * @c: pointer to the string
 *
 * Return: pointer to a string c
 */
char *cap_string(char *c)
{
	int i = 0, j = 0;
	const int ASCII_DIF = 32;
	char seps[] = {
		' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'
	};

	while (c[i] != '\0')
	{
		for (j = 0; seps[j] != '\0'; j++)
		{
			if (c[i - 1] == seps[j])
			{
				if (c[i] >= 'a' && c[i] <= 'z')
					c[i] = c[i] - ASCII_DIF;
			}
		}
		i++;
	}

	return (c);
}
