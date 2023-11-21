#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint {
    int n;
    struct dlistint *prev;
    struct dlistint *next;
} dlistint_t;

/* Declare the print_dlistint function */
size_t print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */
