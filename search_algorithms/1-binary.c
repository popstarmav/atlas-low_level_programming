#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Prints the elemets of an array
 * between left and right indices
 *
 * @array: Pointer to the array to be printed
 * @left : left index of the array to print
 * @right: right index of the array to print
 */
void print_array(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");

	for (i = left; i <= right; i++)
	{
		if (i != left)
		{
			printf(", ");
		}
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - Search for value sorted in array
 * using binary search
 *
 * @array: Pointer to the first element
 * of the array to search in
 * @size: Number of element in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence
 * of @value, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid;

	if (array == NULL)
	{
		return (-1);
	}

	left = 0;
	right = (int)size - 1;

	while (left <= right)
	{
		print_array(array, left, right);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (-1);
}

