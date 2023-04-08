#include <stddef.h>
/**
* binary_to_uint - a function that takes a binary number as a string,
*                  of 0 and 1 characters and converts it into unsigned
*                  integer.
* @b: is the binary number in string format
*
* Return: (result); if current character is not 0, 1 or is NULL,
*                   the return value will be 0.
*/

unsigned int binary_to_uint(const char *b)
{

	unsigned int result = 0;
	int i;

	if ( b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			result <<= 1;
		else if (b[i] == '1')
			result = (result << 1) | 1;
		else
			return (0);
	}
	return (result);
}
