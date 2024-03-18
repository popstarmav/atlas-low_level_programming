#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
* create_hash_node - Create a new hash node.
* @key: the key for the new node.
* @value: The value for the new node.
*
* Return: A pointer to the newly created hash node,
* or NULL if memiry allocation fails.
*/
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *new_node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);

	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;

	return (new_node);
}

/**
* hash_table_set - Add or update an element in the hash table.
* @ht: A pointer to the hash table.
* @key: the key for the element to be added or updated.
* @value: The value associated with the key.
*
* Return: 1 of the operation succeeds, 0 otherwise.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = hash_djb2((unsigned char *)key) & ht->size;
	hash_node_t *new_node = create_hash_node(key, value);

	if (ht == NULL)
	{
		return (0);
	}

	if (key == NULL || *key == '\0')

	if (new_node == NULL)
	{
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
