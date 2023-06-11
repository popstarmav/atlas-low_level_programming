#include "main.h"
#include <stddef.h>

/**
 * _strncpy - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */

char *_strncpy(char *dest, const char *src, int n)
{
	int c;

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] - src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}

	return (dest);
}
