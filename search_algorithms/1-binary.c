#include <stdio.h>
#include "search_algos.h"

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

	return -1;
}

