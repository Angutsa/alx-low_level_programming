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
	int i = 0, j, ltrs = 1;
	char *str = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	
	for (j = 0; *(s1 + j) != '\0'; j++)
	{
		ltrs++;
	}

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		ltrs++;
	}
	
	str = malloc(sizeof(char) * ltrs);
	if (str == NULL)
		return (NULL);

	j = 0;
	while (s1[j] && i < ltrs)
	{
		str[i] = s1[j];
		j++;
		i++;
	}

	j = 0;
	while (s2[j] && i < ltrs)
	{
		str[i] = s2[j];
		j++;
		i++;
	}

	str[ltrs] = '\0';

	return (str);
}
