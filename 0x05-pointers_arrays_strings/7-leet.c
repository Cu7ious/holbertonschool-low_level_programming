/**
 * leet - encodes a string into 1337
 * @s: string
 *
 * Return: pointer to a string
 */
char *leet(char *s)
{
	int i = 0, j;
	char letters[] = "oOlLeEaAtT";
	char numbers[] = "0011334477";

	while (s[i] != '\0')
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
				s[i] = numbers[j];
		}

		i++;
	}

	return (s);
}
