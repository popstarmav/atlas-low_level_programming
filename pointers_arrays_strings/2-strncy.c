#include "main.h"

/**
 * _strncpy - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */

char *_strncpy(char *dest, const char *src, size_t n)
{
	int c;

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] - src[c];
		k++;
	}
	while (c < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
