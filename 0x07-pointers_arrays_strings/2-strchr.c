#include "main.h"
#include <stdio.h>

/**
  * _strchr - returns a pointer to the first occurrence of a character
  * @s: string to check
  * @c: character to look for in string s
  * Return: a pointer to the first occurrence of the character c or
  * NULL if the character is not found
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
