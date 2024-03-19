#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * from a hash table.
 *
 * @ht: Pointer to the hash table
 * @key: Key you want to look up.
 *
 * Return: value associated with the key, or NULL if key couldb't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = hash_djb2((const unsigned char *)key) % ht->size;
	hash_node_t *current = ht->array[index];

	if (ht == NULL || key == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
