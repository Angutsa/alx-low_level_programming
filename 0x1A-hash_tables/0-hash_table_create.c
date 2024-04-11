#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_create - creates a hash table
  * @size: size of the array
  * Return: pointer to the newly created hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int j;
	hash_node_t **hash_table_array = NULL;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	hash_table_array = malloc(size * sizeof(hash_node_t *));
	if (hash_table_array == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
	{
		hash_table_array[j] = NULL;
	}

	hash_table->size = size;
	hash_table->array = hash_table_array;

	return (hash_table);
}
