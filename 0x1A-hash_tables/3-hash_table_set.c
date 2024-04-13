#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

int update_nodes(hash_node_t *node, char *key, char *value);

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add the element to
 * @key: the element's key.
 * @value: the value associated with the key
 * Return: 0 on failure; 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *element;
	hash_node_t **array;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	if (strlen(key) == 0)
		return (0);

	array = ht->array;

	/* Get index and update node, if not, add node to beginning */
	index = key_index((const unsigned char *) key, ht->size);
	if (update_nodes(array[index], (char *) key, (char *) value)  == 0)
	{
		element = malloc(sizeof(hash_node_t));
		if (element == NULL)
			return (0);

		element->key = strdup(key);
		element->value = strdup(value);
		element->next = array[index];
		array[index] = element;
	}

	return (1);
}

/**
 * update_nodes - updates the nodes in a linked list whose key has been
 * provided
 * @key: key
 * @value: value to be associated with the key
 * @node: node to check
 * Return: 1 if any node has been updated, 0 if not
 */
int update_nodes(hash_node_t *node, char *key, char *value)
{
	int updated = 0;

	if (node == NULL)
		return (updated);

	if (strcmp(node->key, key) == 0)
	{
		free(node->value);
		node->value = strdup(value);
		updated = 1;
	}

	if (update_nodes(node->next, key, value) == 1)
		updated = 1;

	return (updated);
}
