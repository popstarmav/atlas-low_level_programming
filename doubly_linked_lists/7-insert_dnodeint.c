#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* Inserts a new node with value n at index idx in a dlistint_t list.
* 
* @h: A pointer to the head of the dlistint_t list.
* @idx: the index to insert the new node.
*
* Return: A pointer to the new node, or NULL on failure.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	unsigned int i = 0;
	dlistint_t *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;

	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}

