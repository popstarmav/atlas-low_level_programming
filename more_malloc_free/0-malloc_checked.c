#include <stdib.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: On success, retunrs apointer to the allocated memory.
 * On failure, the program terminates with exit code 98.
 */

void *malloc_checked(unsigned int b);
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
