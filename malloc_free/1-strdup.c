#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Duplicate a string
 * @str: The string to be duplicated
 *
 * Return: the string
 */

char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);
}
