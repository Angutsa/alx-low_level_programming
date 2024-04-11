#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add the element to
 * @key: the element's key.
 * @value: the value associated with the key
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	const unsigned char *value_dup = (const unsigned char *) value;
	unsigned long int index, size = ht->size;
	hash_node_t *element = NULL;
	hash_node_t *array = *(ht->array);

	/* Ensure key is not empty */
	if (key == NULL)
		return (0);

	/* Generate index */
	index = key_index(key, size);

	/* Create node */
	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (0);

	element->key = key;
	element->value = value_dup;
	element->next = NULL;

	/* Check for collision */
	if (array[index] == NULL)
	{
		/* Add node directly */
		array[index] = *element;
	}
	else
	{
		/* Add node at beginning */
		element->next = array[index];
		array[index] = element;
	}

	return (1);
}
