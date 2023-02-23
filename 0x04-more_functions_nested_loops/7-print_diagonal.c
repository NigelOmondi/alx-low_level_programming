#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
 */
void print_diagonal(int n)
{
	int posn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (posn = 1; posn <= n; ++posn)
		{
			for (space = 1; space <= posn; ++space)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
