#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - gives you the index of a hash table key
 * @key: key
 * @size: size of the hash table array
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((hash_djb2(key)) % size);
}
