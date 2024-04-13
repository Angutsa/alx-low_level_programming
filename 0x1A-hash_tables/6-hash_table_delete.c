#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "hash_tables.h"

void delete_entries(hash_node_t *node);

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	int i;

	/* Check inputs */
	if (ht == NULL)
		return;

	for (i = 0; i < (int) ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;

		delete_entries(ht->array[i]);
	}

	free(ht->array);
	free(ht);
}

/**
 * delete_entries - delete all entries in the hash table index
 * @node: first entry at the index
 */
void delete_entries(hash_node_t *node)
{
	hash_node_t *next;

	if (node == NULL)
		return;

	next = node->next;

	free(node->value);
	free(node->key);
	free(node);
	delete_entries(next);
}
