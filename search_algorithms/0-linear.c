#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using
 *                  the Linear search algorithm.
 * @array: The array to search in.
 * @size: The length of the array.
 * @value: The value to look for.
 *
 * Return: The index of the first occurrence of the value in the array,
 *         otherwise -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);

		if (arrat[i] == value)
			return (i);
	}

	return (-1);
}
