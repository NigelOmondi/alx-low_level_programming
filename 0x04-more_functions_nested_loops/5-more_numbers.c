#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers 0 to 14
 * followed by a new line
 *
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int number, row, counter;

	for (row = 1; row <= 10; ++row)
	{
		for (counter = 0; counter <= 14; ++counter)
		{
			number = counter;
			if (counter > 9)
			{
				_putchar(1 + 48);
				number = counter % 10;
			}
			_putchar(number + 48);
		}
		_putchar('\n');
	}
}
