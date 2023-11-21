#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - Computes the index of a key in the hash table array.
 * @key: The key to be hashed.
 * @size: The size of the hash table array.
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    if (key == NULL || size == 0)
        return (0);

    unsigned long int hash_value = 0;

    for (unsigned long int i = 0; key[i] != '\0'; i++)
        hash_value = (hash_value * 31) + key[i];

    return (hash_value % size);
}
