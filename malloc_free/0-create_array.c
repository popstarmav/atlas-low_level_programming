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

/**
 * main - Entry point of the program
 *
 * Return: ALways 0.
 */
int main(void)
{
	unsigned int size = 5;
	char c = 'A';

	char *my_array = create_array(size, c);

	if (my_array != NULL)
	{
		printf("Array: %s\n", my_array);
		free(my_array);
	}
	else
	{
		printf("Failed to create the array. \n");
	}

	return (0);
}
