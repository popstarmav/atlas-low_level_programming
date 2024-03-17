#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t linked list.
 *
 * @head: A pointer to the head of the linked list.
 * @n: The data value for the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
		new_node->prev = last;
	}

	return (new_node);
}

