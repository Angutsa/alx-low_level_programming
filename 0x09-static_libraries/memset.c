#include "main.h"

/**
  * _memset - fills the first n bytes of the memory pointed to
  * @s: pointer to memory to be filled
  * @b: constant to be filled in the memory
  * @n: the number of bytes to be filled
  * Return: apointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
	{
		char *ptr = s + i;
		*ptr = b;
	}

	return (s);
}
