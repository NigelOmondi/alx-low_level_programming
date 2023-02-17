#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 * @argi: the increment member
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
		putchar('a' + i);
	putchar('\n');

	return (0);
}
