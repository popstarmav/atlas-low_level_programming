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
	unsigned int i;
	char *s;

	s = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (s == NULL)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
