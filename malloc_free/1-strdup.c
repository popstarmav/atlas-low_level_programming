#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicate a string
 * @str: The string to be duplicated
 *
 * Return: the string
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	size_t length = strlen(str) + 1;

	char *new_str = (char *)malloc(length);

	if (new_str != NULL)
	{
		strcpy(new_str, str);
	}

	return (new_str);
}
