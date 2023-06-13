#include "main.h"

/**
 * _puts - function that prints a string
 *@str: first value to check
 *
 */

int _putchar(int i)

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
