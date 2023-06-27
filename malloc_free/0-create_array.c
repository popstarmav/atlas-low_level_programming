#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: The size of the array.
 * @c: The char ro fill in the array
 *
 * Return:The array filled
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *s = malloc((size + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
		s[i] = c;

	s[size] = '\0';

	return (s);
}
