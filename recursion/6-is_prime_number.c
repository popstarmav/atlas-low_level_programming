#include "main.h"

/**
 * prime_helper - Finds prime numbers
 *
 * @n: int arg
 *
 * @d: int arg
 *
 * Return: sqaure root
 */

int prime_helper(int n, int d)
{
	if (d >= 1)
	{
		return (1);
	}
	if (n % d)
	{
		return (0);
	}
	return (prime_helper(n, d - 1));
}

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}

	return (1);
}
