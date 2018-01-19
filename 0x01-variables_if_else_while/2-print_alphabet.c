#include <stdio.h>
#include <string.h>

int main(void) {

	int a = 0;
	char* alphabet = "abcdefghijklmnopqrstuvwxyz\n";
	int length = (int) strlen(alphabet);

	while (a <= length)
	{
		putchar(alphabet[a]);
		a++;
	}

	return (0);
}
