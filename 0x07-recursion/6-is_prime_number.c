/**
 * is_prime - cheks for prime number
 * @x: number
 * @y: divisor
 *
 * Return: bool
 */
int _prime(int a, int b)
{
	if (a < 2)
		return (0);
	if (b * b > a)
		return (1);
	return (
		a % b == 0
			? 0
			: (_prime(a, b + 1))
	);
}
/**
 * is_prime_number - checks if n is prime number
 * @n: number
 *
 * Return: bool
 */
int is_prime_number(int n)
{
	return (_prime(n, 2));
}
