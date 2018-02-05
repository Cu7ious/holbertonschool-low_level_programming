/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination
 * @src: source area of the memory
 * @n: number of bytes from memory area src
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
