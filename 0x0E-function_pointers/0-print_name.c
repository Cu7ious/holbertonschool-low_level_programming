/**
 * print_name - prints a name with a callback
 * @name: name to print, string
 * @f: callback, pointer to a function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
