#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht = malloc(sizeof(shash_table_t));
    unsigned long int i;

    if (!ht)
        return (NULL);

    ht->size = size;
    ht->array = malloc(size * sizeof(shash_node_t *));
    if (!ht->array)
    {
        free(ht);
        return (NULL);
    }

    for (i = 0; i < size; i++)
        ht->array[i] = NULL;

    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *new_node, *current;

    if (!ht || !key || !*key || !value)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    current = ht->array[index];

    while (current)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            return (1);
        }
        current = current->next;
    }

    new_node = malloc(sizeof(shash_node_t));
    if (!new_node)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    if (!ht->shead)
    {
        new_node->sprev = NULL;
        new_node->snext = NULL;
        ht->shead = new_node;
        ht->stail = new_node;
    }
    else
    {
        current = ht->shead;
        while (current && strcmp(current->key, key) < 0)
            current = current->snext;

        if (!current)
        {
            new_node->sprev = ht->stail;
            new_node->snext = NULL;
            ht->stail->snext = new_node;
            ht->stail = new_node;
        }
        else if (!current->sprev)
        {
            new_node->sprev = NULL;
            new_node->snext = current;
            current->sprev = new_node;
            ht->shead = new_node;
        }
        else
        {
            new_node->sprev = current->sprev;
            new_node->snext = current;
            current->sprev->snext = new_node;
            current->sprev = new_node;
        }
    }
    return (1);
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *node;

    if (!ht || !key || !*key)
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    node = ht->array[index];

    while (node)
    {
        if (strcmp(node->key, key) == 0)
            return (node->value);
        node = node->next;
    }
    return (NULL);
}

void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *node;
    int first = 1;

    if (!ht)
        return;

    printf("{");
    node = ht->shead;
    while (node)
    {
        if (!first)
            printf(", ");
        printf("'%s': '%s'", node->key, node->value);
        first = 0;
        node = node->snext;
    }
    printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *node;
    int first = 1;

    if (!ht)
        return;

    printf("{");
    node = ht->stail;
    while (node)
    {
        if (!first)
            printf(", ");
        printf("'%s': '%s'", node->key, node->value);
        first = 0;
        node = node->sprev;
    }
    printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{
    unsigned long int i;
    shash_node_t *node, *temp;

    if (!ht)
        return;

    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node)
        {
            temp = node->next;
            free(node->key);
            free(node->value);
            free(node);
            node = temp;
        }
    }
    free(ht->array);
    free(ht);
}
