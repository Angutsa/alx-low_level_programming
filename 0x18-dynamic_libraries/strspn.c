#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  * @s: string to be checked
  * @accept: characters to look for
  * Return: the number of bytes in the intial segment of s that
  * contains c
  */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int bytes = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bytes = i + 1;
				break;
			}
		}

		if (*(accept + j) == '\0')
		{
			return (bytes);
		}
	}
	return (bytes);
}

