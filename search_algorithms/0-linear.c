#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
    size_t i;

    for (i = 0; i < size; i++)
    {
        printf("Searching array[%ld] = %d\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}

