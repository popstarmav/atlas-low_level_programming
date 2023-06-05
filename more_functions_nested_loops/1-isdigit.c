#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * @x: The character to be checked
 * Return: 1 if the character is a digit, 0 otherwise
 */
int _isdigit(int x)
{
	if (x >= '0' && x <= '9')
	{
		return (1);
	}
	return (0);
}
