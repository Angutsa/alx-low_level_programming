#include "main.h"

/**
  * _strcpy - copies a string
  * @dest: pointer to copy the string to
  * @src: pointer to the string to be copied
  * Return: returns dest - the copied string
  */
char *_strcpy(char *dest, char *src)
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

