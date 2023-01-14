#include "main.h"

/**
  * _strncpy - copies a string
  * @dest: pointer to copy the string to
  * @src: pointer to the string to be copied
  * @n: TODO
  * Return: returns dest - the copied string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int ltr = 0;

	for (;;)
	{
		*(dest + ltr) = *(src + ltr);

		if (*(src + ltr) == '\0')
			return (dest);
		ltr++;
	}
}

