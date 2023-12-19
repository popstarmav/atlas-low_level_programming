#include <stdio.h>
#include <stdlib.h>

typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n) {
    if (h == NULL) {
        return NULL;
    }

    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        return NULL;
    }

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (idx == 0) {
        new_node->next = *h;
        if (*h != NULL) {
            (*h)->prev = new_node;
        }
        *h = new_node;
        return new_node;
    }

    dlistint_t *current = *h;
    for (unsigned int i = 0; i < idx - 1; i++) {
        if (current == NULL) {
            free(new_node);
            return NULL;
        }
        current = current->next;
    }

    if (current == NULL) {
        free(new_node);
        return NULL;
    }

    new_node->next = current->next;
    new_node->prev = current;
    if (current->next != NULL) {
        current->next->prev = new_node;
    }
    current->next = new_node;

    return new_node;
}

int main() {
    dlistint_t *head = NULL;

    insert_dnodeint_at_index(&head, 0, 1);
    insert_dnodeint_at_index(&head, 1, 2);
    insert_dnodeint_at_index(&head, 1, 3);
    insert_dnodeint_at_index(&head, 0, 4);

    dlistint_t *current = head;
    while (current != NULL) {
        printf("%d ", current->n);
        current = current->next;
    }
    printf("\n");

    return 0;
}
