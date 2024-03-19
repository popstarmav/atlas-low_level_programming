#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

unsigned long hash(const char *str) {
  unsigned long hash = 5381;
  int c;

  while ((c = *str++)) {
    hash = ((hash << 5) + hash) + c; 
  }

  return hash;
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value) 
{
	unsigned long hash(const char *str);
	int index = hash(key) % ht->size;
	
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	if (!new_node) return 0;
	
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

  return 1;
}
