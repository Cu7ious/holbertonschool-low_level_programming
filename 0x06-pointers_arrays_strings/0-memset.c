/**
 * _memset - fills memory with a constant byte
 * @s: pointer to string
 * @b: constant byte
 * @n: number of times to fill the memory area with @b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
