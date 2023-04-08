#include "main.h"

/**
* set_bit - sets the value of a bit at the specified index position to 1
*
* @n: unsigned long integer
* @index: the index of the bit to be set
* Return: 1 for successfully setting bit to 1,
* Return -1 if failed to set bit
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);  /* index out of range */
	}

	mask = 1ul << index;
	*n |= mask;     /* set the bit to 1 using bitwise OR */

	return (1);       /* success */
}
