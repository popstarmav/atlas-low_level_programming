#include "main.h"
#include <strings.h>

/**
 * _strnact - Concatenate strings, defining the size of sencd string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */

char *_strnact(char *dest, char *src, int n)
{

	int i, c;

	i = 0;
	c = 0;

	while (dest[i] != '\0')
		i++;

	while (src[c] != '\0' && i < 97 && c < n)
	{
		(dest[i]) = (src[c]);
		i++;
		c++;
	}
	(dest[c] = '\0');
	return (dest);
}
