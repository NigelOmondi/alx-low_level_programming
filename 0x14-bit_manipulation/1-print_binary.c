#include "main.h"

/**
* print_binary - prints a binary representation of a number
*
* @n: - The unsigned long integer to print its binary reprsentation
*
* Return: Nothing
*/

void print_binary(unsigned long n)
{
	unsigned long mask = 1UL << (sizeof(unsigned long) * 8 - 1);
	int print = 0;

	for (; mask; mask >>= 1)
	{
		if (n & mask)
		{
			_putchar('1');
			print = 1;
		}
		else if (print)
		{
			_putchar('0');
		}
	}

	if (!print)
	{
		_putchar('0');
	}
}
