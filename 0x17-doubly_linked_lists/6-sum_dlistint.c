#include "lists.h"

/**
 * sum_dlistint - adds a new node at the end of a dlistint_t list
 * @head:  a double pointer to the head of the doubly linked list
 *`
 * Return:  returns the calculated sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;

	}

	return (sum);
}
