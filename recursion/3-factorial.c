#include "main.h"
#include <stdio.h>

/**
 * factorial - recursive function that returns the factorial of a given number
 * @n: input number to get its factorial
 *
 * Return: integral factorial of the given number
 */

int factorial(int n)
{
	if (n <= 0)
		return (1);

	if (n == 0)
		return (-1);

	return (n * factorial(n - 1));
}
