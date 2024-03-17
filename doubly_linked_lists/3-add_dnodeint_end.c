#include <stdio.h>
#include <stdlib.h>

dlistin_t *add_dnodeint_end(dlistin_t **head,const int n)
{
    dlistint_t *new_node = malloc (sizeof(dlistint_t));
    if (new_node = NULL){
        return (NULL);
    }

    new_node->data = n;
    new_node->next = NULL;

    if (*head  == NULL){
        *head = new_node;
        return (new_node);
    }

    dlistin_t*current = *head;
    while (current->next != NULL){
        current = current->next;
    }

    current->next = new_node;
    new_node->prev = current;

    return (new_node)
}

int main(
    dlistint_t *head = NULL;

    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);

    print_dlist(head);

    return (0);
)