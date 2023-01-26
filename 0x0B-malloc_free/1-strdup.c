#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a copy of the string given
  * @str: pointer to the string to be copied
  * Return: a pointer to the new copy of the string
  */
char *_strdup(char *str)
{
	int i = 1, j;
	char *newptr = NULL;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		i++;
	}

	newptr = malloc(sizeof(char) * i);
	if (newptr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		*(newptr + j) = *(str + j);
	}

	return (newptr);
}
