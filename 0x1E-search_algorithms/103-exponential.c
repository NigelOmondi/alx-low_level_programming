#include "search_algos.h"

/**
 * _binary_search - Perform a binary search in a sorted array.
 * @array: A pointer to the first element of the array to search.
 * @left: The left index of the subarray.
 * @right: The right index of the subarray.
 * @value: The value to search for.
 *
 * Return: If the value is found, the index where it is located.
 *         Otherwise, return -1.
 *
 * Description: This function performs a binary search within a given
 * subarray and returns the index of the value if found, or -1 if not found.
 * It prints the subarray being searched at each step.
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}


/**
 * exponential_search - Searches for a value in a sorted array
 *                      of integers using exponential search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: This function performs an exponential search in a sorted array.
 * It first checks if the value is present at the first element.
 * If not, it searches
 * for a range where the value might exist using exponential steps. Then, it
 * performs a binary search within that range to find the value and prints
 * the subarray being searched at each step.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
