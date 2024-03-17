#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - computes the sum of all the data values in a
 * dlistint_t linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: the sum of all data values in the list.
 * if the list is empty, returns 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

