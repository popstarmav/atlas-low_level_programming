#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/*
*print_dlistint - Print element of a doubly linked list.
*
*This function prints the elements of a doubly linked list
*to stdout and returns the count of printed elements
*
*@h: Pointer ro head of rhe doubly list.
*
*Return: Total count of printed elements
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