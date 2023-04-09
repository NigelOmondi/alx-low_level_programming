#include "main.h"

/**
* clear_bit - clears the bit at position 'index'
* @n: a pointer to unsigned long integer
* @index: the index of bit to be cleared
*
* Return: 1 if successful; -1 if index is greater than or equal to
* the number of bits in an unsigned long integer
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);

	mask = 1ul << index;
	*n &= ~mask;
	return (1);
}
