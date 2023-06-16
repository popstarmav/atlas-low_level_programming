#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Return the length of a string.
 * @s: The sting to count.
 *
 * Return : the the lenght of string.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}

	return (0);
}
