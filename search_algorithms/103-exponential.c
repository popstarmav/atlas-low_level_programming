#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * binary_search_exp - searches for a value in a sorted array using binary search
 * @array: pointer to the first element of the array to search in
 * @left: left boundary of the search
 * @right: right boundary of the search
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found
 */
int binary_search_exp(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if not found or array NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t right;

	if (array == NULL || size == 0)
		return (-1);

	/* Find the range for binary search */
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	/* Determine the right boundary for binary search */
	right = (bound < size) ? bound : size - 1;
	
	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, right);

	/* Perform binary search in the found range */
	return (binary_search_exp(array, bound / 2, right, value));
}
