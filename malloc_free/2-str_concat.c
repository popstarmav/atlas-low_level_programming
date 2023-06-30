#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}

	return (a);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pinter to the concatenated string, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s1 = "";

	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);

	char *result = (char *)malloc((s1_len + s1_len + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, s2_len);

	result[s1_len + s2_len] = '\0';

	return (result);
}
