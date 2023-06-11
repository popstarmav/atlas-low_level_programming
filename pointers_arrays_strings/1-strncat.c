#include "main.h"

/**
 * _strnact - Concatenate strings, defining the size of sencd string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
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
		(dest[i]) = (src[c]);
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
