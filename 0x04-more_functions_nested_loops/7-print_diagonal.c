#include "main.h"

/**
 * print_diagonal - Print diagonal line
 * @n: the number of times the character \ should be printed
 *
 * Return: void
 */


void print_diagonal(int n)
{
	int posn, space;

	if (n <= 0)
		_putchar('\n');

	for (posn = 0; posn < n; posn++)
	{
		for (space = 0; space < posn; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
