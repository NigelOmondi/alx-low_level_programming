#include <stdio.h>
/**
 * main - print all single digits of base 10
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	putchar('\n');

	return (0);
}
