#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - Calculates the index for a key in the hash table array.
 * @key: The key to be hashed.
 * @size: The size of the hash table array.
 *
 * Return: Index for storing the key/value pair.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_value;
    unsigned long int i;

    if (key == NULL || size == 0)
        return (0);

    hash_value = 0;

    for (i = 0; key[i] != '\0'; i++)
    {
        hash_value = (hash_value * 31) + key[i];
    }

    return (hash_value % size);
}
