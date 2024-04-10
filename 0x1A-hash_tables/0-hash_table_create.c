#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_t - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int j;

	hash_table_t hash_table[size];

	for (j = 0, j < size, j++)
	{
		hash_table[j] = NULL;
	}

	return (*hash_table)
}
