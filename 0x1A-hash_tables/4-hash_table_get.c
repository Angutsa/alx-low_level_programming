#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

char *check_for_key(hash_node_t *node, char *key);

/**
 * hash_table_get - retrieves the value associated with a key
 * @ht: the hash table to look into
 * @key: the key to look for
 * Return: the value associated with the key or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char * value;
	unsigned long int index;

	/* Check inputs */
	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);

	/* Get key index and check for key */
	index = key_index((const unsigned char *) key, ht->size);
	value = check_for_key(ht->array[index], (char *) key);

	return (value);
}

/**
 * check_for_key - recursive function to find the key
 * @node: node to check for key
 * @key: key to look for
 * Return: returns the value for the key immediately its found
 */
char *check_for_key(hash_node_t *node, char *key)
{
	char *value = NULL;

	if (node == NULL)
		return (value);

	if (strcmp(node->key, key) == 0)
		value = node->value;
	else
		value = check_for_key(node->next, key);

	return (value);
}

