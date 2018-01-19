#include <stdio.h>
#include <string.h>

/**
 * main - root function
 *
 * Return: always 0
 **/
int main(void)
{
	int a = 0;
	char *alphabet = "abcdefghijklmnopqrstuvwxyz\n";
	int length = (int) strlen(alphabet);

	while (a <= length)
	{
		if (alphabet[a] != "q" && alphabet[a] != "e")
			putchar(alphabet[a]);

		a++;
	}

	return (0);
}
