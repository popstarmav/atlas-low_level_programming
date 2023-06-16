#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Return the length of a string.
 * @s: The string to count.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s ==  '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */

int main(void)
{
	char str[] = "%c";
	int length = _strlen_recursion(str);

	printf("Length of the string: %d\n", length);

	return (0);
}
