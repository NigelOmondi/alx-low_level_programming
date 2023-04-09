#include "main.h"

/**
* flip_bits - returns the number of bits that need to be flipped
* to convert n to m, which is stored in the variable count
*
* @n: unsigned long int to be flipped with m
* @m: unsigned long int to be flipped with n
* Return: number of bits that need to be flipped to convert n to m
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xresult = n ^ m;
	unsigned int count = 0;

	while (xresult)
	{
		count++;
		xresult &= (xresult - 1);
	}

	return (count);
}
