/**
 * _sqrt - finds square root
 * @x: number
 * @y: divisor
 *
 * Return: sqrt or -1
 */
int _sqrt(int x, int y)
{
	if (y * y == x)
		return (y);

	if (y * y > x)
		return (-1);

	return (_sqrt(x, y + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: sqrt of number n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);
	else
		return (_sqrt(n, 1));
}
