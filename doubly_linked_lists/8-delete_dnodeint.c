#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given
 * index in a dlistint_t linked
 *
 * @head: A pointer to a pointer to the head of the linked list.
 * @index: the index of the node to be deleted.
 *
 * Return: 1 if the delection succeeds, -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *prev;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	current = *head;
	prev = NULL;

	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	if (prev == NULL)
		*head = current->next;
	else
		prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = prev;

	free(current);
	return (1);
}

