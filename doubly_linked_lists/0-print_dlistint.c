#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_dlistint - Prints the elements of a doubly link list.
 *
 * This function prints elements of a doubly linked list to stdout
 * and returns the count od printed elements.
 *
 *@h: Pointer to the head of the doubly linked list
 *
 *Return: Total count of printer
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
