#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: pinter to the string
 *
 * Return: void
 */

void _print_rev_reverse(char *s)
{
	if (*s != '\0')
	{
		_print_rev_reverse(s + 1);
		putchar(*s);
	}
}
