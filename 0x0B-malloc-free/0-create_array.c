#include <stddef.h>
#include <stdlib.h>

#include "main.h"

/**
  * create_array - creates an array of chars
  * @size: size of the array
  * @c: char to initialise array with
  * Return: pointer to the first char in the array
  */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < (int) size; i++)
	{
		s[i] = c;
	}
	return (s);
}
