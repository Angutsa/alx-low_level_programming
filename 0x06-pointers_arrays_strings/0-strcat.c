#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\0';
	return (dest);
}
