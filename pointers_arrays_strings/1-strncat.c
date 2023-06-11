#include "main.h"
#include <string.h>

/**
 * _strnact - Concatenates two strings
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 * Return: A pointer to the resulting string dest.
 */
char *_strnact(char *dest, char *src, int n)
{
	int i;
	int c;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	c = 0;
	while (c < n && src[c] != '\0')
	{
	dest[i] = src[c];
	i++;
	c++;
	}
	dest[i] = '\0';
	return (dest);
}
