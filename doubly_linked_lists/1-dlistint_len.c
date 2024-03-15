#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a lined dlistint_t list
 *
 * @h: pointer the head of the lisst
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
