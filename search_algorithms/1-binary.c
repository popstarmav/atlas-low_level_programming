#include "search_algos.h"

/**
 * print_array - Prints the contents of an array.
 * @array: The source array to print.
 * @l: The left index of the array.
 * @r: The right index of the array.
 */
void print_array(int *array, size_t l, size_t r)
{
    size_t i;

    if (array != NULL)
    {
        printf("Searching in array: ");
        for (i = l; i <= r; i++)
            printf("%d%s", array[i], i < r ? ", " : "\n");
    }
}

/**
 * binary_search_recursive - Searches for a value in a sorted array using
 *                           a binary search recursively.
 * @array: The array to search in.
 * @l: The left index of the array.
 * @r: The right index of the array.
 * @value: The value to look for.
 *
 * Return: The index of the value in the array, otherwise -1.
 */
int binary_search_recursive(int *array, size_t l, size_t r, int value)
{
    size_t m;

    if (array == NULL)
        return (-1);

    print_array(array, l, r);
    if (l <= r)
    {
        m = l + (r - l) / 2;
        if (array[m] == value)
            return (m);
        else if (array[m] > value)
            return (binary_search_recursive(array, l, m - 1, value));
        else
            return (binary_search_recursive(array, m + 1, r, value));
    }

    return (-1);
}

/**
 * binary_search - Searches for a value in a sorted array using
 *                 a binary search.
 * @array: The array to search in.
 * @size: The length of the array.
 * @value: The value to look for.
 *
 * Return: The index of the value in the array, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    return (binary_search_recursive(array, 0, size - 1, value));
}

