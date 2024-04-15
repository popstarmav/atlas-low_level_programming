#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Search for value in an array using
 * linear search algorithm
 *
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of first occurrence of @value,
 * otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%i] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}

