/**
 * string_toupper - converts input to uppercase
 * @c: pointer to the string
 *
 * Return: character
 */
char *string_toupper(char *c)
{
	int i = 0;
	const int ASCII_DIF = 32;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - ASCII_DIF;
		}
		i++;
	}

	return (c);
}
