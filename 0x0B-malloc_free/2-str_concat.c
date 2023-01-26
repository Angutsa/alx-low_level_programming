#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * Return: pointer to concatenated string
  */
char *str_concat(char *s1, char *s2)
{
	int i, j, ltrs = 1;
	char *str = NULL;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		ltrs++;
	}

	for (i = 0; *(s2 + i) != '\0'; i++)
	{
		ltrs++;
	}

	str = malloc(sizeof(char) * ltrs);
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ltrs && *(s1 + j) != '\0'; i++, j++)
	{
		*(str + i) = *(s1 + j);
	}

	for (j = 0; i < ltrs; i++, j++)
	{
		*(str + i) = *(s2 + j);
	}

	return (str);
}
