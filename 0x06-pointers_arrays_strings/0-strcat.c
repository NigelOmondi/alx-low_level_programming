#include <stdio.h>

/**
 * *_strcat(char *dest, char *src) - concatenates two strings
 * @*dest: string one to be added onto
 * & @*src: the string to add to the end of string *dest
 * Return: Char pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}


