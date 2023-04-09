#include "main.h"

/**
* get_endianness - determines whether the current system is little endian
* or big endian.
*
* Return: 1 if the first byte is non-zero, then the system is little endian
* Otherwise, the system is big endian and the function returns 0.
*/

int get_endianness(void)
{
	unsigned int e = 1;
	char *c = (char *)&e;

	return (*c ? 1 : 0);
}
