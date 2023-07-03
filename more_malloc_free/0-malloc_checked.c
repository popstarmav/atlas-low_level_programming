#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocate a space
 * @b: unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
void *c;

c = malloc(b);
if (c == NULL)
{
	exit(98);
}
return (c);
}
