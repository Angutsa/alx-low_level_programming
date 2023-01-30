#include "main.h"
/**
 * _strncat - concatenates two string
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, b = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (b < n && src[b] != '\0')
	{
		dest[len] = src[b];
		len++;
		b++;
	}

	dest[len + n + 1] = '\0';
	return (dest);
}
