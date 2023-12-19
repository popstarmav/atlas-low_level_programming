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
    return (hash_djb2(key) % size);
}
