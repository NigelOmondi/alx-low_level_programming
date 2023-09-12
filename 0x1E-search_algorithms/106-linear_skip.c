#include "search_algos.h"


/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: A pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where `value` is located.
 * If `value` is not present in `list` or if `list` is NULL, return NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (list == NULL)
		return (NULL);

	current = list;
	express = list->express;

	while (express != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);

		if (express->n >= value)
			break;

		current = express;
		express = express->express;
	}

	if (express == NULL)
	{
		while (current->next != NULL)
			current = current->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
current->index, express->index);

	while (current != NULL && current->index <= express->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		if (current->n == value)
			return (current);

		current = current->next;
	}

	return (NULL);
}
