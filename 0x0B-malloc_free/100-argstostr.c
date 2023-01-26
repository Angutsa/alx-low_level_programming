#include <stdlib.h>

#include <stdio.h>
#include "main.h"

/**
  * argstostr - concatenates all the arguments of your program
  * @ac: argument count
  * @av: array of the arguments
  * Return: pointer to the string
  */
char *argstostr(int ac, char **av)
{
	int len = 0, i, j, k;
	char *s = NULL;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(av[i] + j) != '\0'; j++)
		{
			len++;
		}
		len = len + 2;
	}

	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac && k < len; i++, k++)
	{
		for (j = 0; *(av[i] + j) != '\0'; j++)
		{
			s[k] = *(av[i] + j);
			k++;
		}
		s[k] = '\n';
	}

	s[len - 1] = '\0';
	return (s);
}
