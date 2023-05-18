#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - prints the length of a list
 * @h: head of the doubly linked list as the parameter
 * Return: the number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
