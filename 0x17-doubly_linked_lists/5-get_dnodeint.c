#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head:  a double pointer to the head of the doubly linked list
 * @index: the index of the desired node
 * Return: NULL If the loop finishes without finding the desired index
 * it means the node does not exist in the list, and the function returns NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}

	return (NULL);
}
