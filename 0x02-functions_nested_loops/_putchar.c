#include <unistd.h>
/**
 * _putchar - writes character c to standard output
 * @c: The character to print
 *
 * Return: 1, on success
 * 	  -1, on error and error number is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
