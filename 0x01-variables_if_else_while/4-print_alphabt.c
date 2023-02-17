#include <stdio.h>
/**
 * main - print all letters of the alphabet except e and q
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		char c = 'a' + i;

		if (c == 'e' || c == 'q')
		{
			continue;
		}

		putchar(c);
	}
	putchar('\n');

	return (0);
}
