#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destination string
 * @src: source string
 * @n: copy limit
 * Return: dest - copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0, d = 0;

	while (src[d])
	{
		d++;
	}

	while (c < n && src[c])
	{
		dest[c] = src[c];
		c++;
	}

	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}

	return (dest);
}
