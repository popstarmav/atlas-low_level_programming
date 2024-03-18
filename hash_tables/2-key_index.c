#include <stdlib.h>
#include "hash_tables.h"
/**
 * key_index - Calculate the index of a key in a hash table array.
 * @key: The key to calculate the index for.
 * @size: The size of the hash table array.
 *
 * Return: The index at which the key should be stored in the array.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	unsigned long int index = hash_value % size;

	return (index);
}

