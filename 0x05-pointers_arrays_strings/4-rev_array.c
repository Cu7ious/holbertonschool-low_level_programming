/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to reverse
 * @n: number of elements of array
 *
 * Return: pointer to string dest
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	n--;
	for (i = 0; i <= n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
