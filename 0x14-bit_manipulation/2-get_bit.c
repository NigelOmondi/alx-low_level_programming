#include "main.h"

/**
* get_bit - returns value of a bit at a given index
* @n: the number whose value is being checked
* @index: the index to a bit being checked
*
*Return: The value of the bit at the specified index position
*/

int get_bit(unsigned long n, unsigned int index)
{
	if (index >= sizeof(unsigned long) * 8)
		return (-1);
	return ((n >> index) & 1);
}
