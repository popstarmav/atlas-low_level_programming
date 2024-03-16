#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint - adds new node at the beginning of a doubly link list.
* @head: Pinter to a pointer of head list.
* @n: Integer data stored in new node.
*
* Return: Address of new element (new node), or NULL if it failed.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Set the data and pointers of the new node*/
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head =  new_node;

	return (new_node);
}

/**
*print_dlist - rints the elemnt of doubly link list
*@head: Pinter to the head of the list.
*/
void print_dlist(dlistint_t *head)
{
	printf("Doubly linked list:");
	while (head != NULL)
	{
		printf("Doubly linked list: ");
		while (head != NULL)
		{
			printf("%d ", head->n);
			head = head->next;
		}
	}
	printf("\n");
}
