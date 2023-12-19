#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>

/**
 * struct listint_s - Node structure for a singly linked list.
 *
 * @n: Integer value stored in the node.
 * @index: Index of the node in the list.
 * @next: Pointer to the next node in the list.
 *
 * Description:
 * This structure defines a node in a singly linked list. It holds an
 * integer value, an index indicating its position, and a pointer to
 * the next node in the list.
 */
typedef struct listint_s
{
    int n;               /* Integer stored at the node. */
    size_t index;        /* Index of the node in the list. */
    struct listint_s *next; /* Pointer to the next node. */
} listint_t;

int linear_search(int *array, size_t size, int value);

#endif /* _SEARCH_ALGOS_H_ */
