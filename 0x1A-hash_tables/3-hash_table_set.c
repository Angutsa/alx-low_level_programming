#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
	hash_node_t **array = ht->array;

	/* Check input */
	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	/* Ensure key is not empty */
	if (strlen(key) == 0)
		return (0);

	/* Generate index */
	index = key_index((const unsigned char *) key, size);

	/* if index empty, add node */
	if (array[index] == NULL)
	{
		/* Create node */
		element = malloc(sizeof(hash_node_t));
		if (element == NULL)
			return (0);

		element->key = (char *) key;
		element->value = (char *) value_dup;
		element->next = NULL;
	}
	else
	{
		/* Check if key needs updating */
		if (strcmp(array[index]->key, (char *) key) == 0)
		{
			free(array[index]->value);
	 		array[index]->value = (char *)value_dup;
			return (1);
		}

		/* Otherwise add node to the very beginning */
		element = malloc(sizeof(hash_node_t));
		if (element == NULL)
			return (0);

		element->key = (char *) key;
		element->value = (char *) value_dup;
		element->next = array[index];
		array[index] = element;
	}

	return (1);
}
