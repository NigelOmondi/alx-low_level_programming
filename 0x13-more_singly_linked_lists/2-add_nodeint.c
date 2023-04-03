#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - add a node at beginning of a listint_t list.
  *
  * @head: the head of double pointer
  * @n: int add the list
  * Return: NULL if it fails
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
