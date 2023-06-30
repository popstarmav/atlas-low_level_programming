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
	char *concatenated;
	size_t len1, len2, len_total;
	size_t i, j;

	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s1 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	len_total = len1 + len2;

	concatenated = malloc((len_total + 1) * sizeof(char));

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		concatenated[i] = s2[j];

	concatenated[len_total] = '\0';

	return (concatenated);
}
