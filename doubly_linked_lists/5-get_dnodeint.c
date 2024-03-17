#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_dnodeint_at_index - Returns the nth node of a doubly linked list.
* @head: Pointer to the of list.
* @index: Index of the node, starting from 0.
*
* Return: Pointer to the nth node, or NULL if the node doesn't exist.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (count < index)
	{
		return (NULL);
	}
	else
	{
		return (current);
	}
}

