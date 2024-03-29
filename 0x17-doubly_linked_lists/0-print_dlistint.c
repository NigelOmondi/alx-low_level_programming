#include "lists.h"
#include <stdlib.h>
/**
 * print_dlistint - prints all the elements of a list
 * @h: head of the doubly linked list as the parameter
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
