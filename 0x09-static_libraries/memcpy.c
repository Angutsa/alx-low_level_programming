#include "main.h"

/**
  * _memcpy - copies bytes from one memory location to another
  * @dest: the memory area to copy to
  * @src: the memory area to copy from
  * @n: number of bytes to copy
  * Return: dest - pointer to the memory area copied to
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
	{
		char *ptrsrc = src + i;
		char *ptrdest = dest + i;

		*ptrdest = *ptrsrc;
	}

	return (dest);
}

