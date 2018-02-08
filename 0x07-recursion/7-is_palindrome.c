/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: the length i of the string s
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
		return (0);

	if (*(s + 1) > '\0')
		i = i + _strlen_recursion(s + 1);

	return (i);
}


/**
 * _palindrome - checks if word is a palindrome
 * @s: string
 * @l: length of the string l
 *
 * Return: bool
 */
int _palindrome(char *s, int length)
{
	if (*s != *(s + length))
		return (0);

	if (*(s + length) == '\0')
		return (1);

	return (_palindrome(++s, length - 2));
}


/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to be checked
 *
 * Return: bool
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	--len;
	return (_palindrome(s, len));
}
