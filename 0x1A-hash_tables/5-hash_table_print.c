#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "hash_tables.h"

void print_linked_list(hash_node_t *node);

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	int i, size = (int) ht->size, comma = 0;

	/* Check inputs */
	if (ht == NULL)
		return;

	/* Print all key-value pairs */
	printf("{");
	for (i = 0; i < size; i++)
	{
		if (ht->array[i] == NULL)
			continue;

		if (comma)
			printf(", ");

		print_linked_list(ht->array[i]);
		comma = 1;
	}

	printf("}\n");
}


/**
 * print_linked_list - prints all the key-value pairs in the linked list
 * @node: node to print
 */
void print_linked_list(hash_node_t *node)
{
	if (node == NULL)
		return;

	printf("'%s': '%s'", node->key, node->value);
	if (node->next)
		printf(", ");

	print_linked_list(node->next);
}
