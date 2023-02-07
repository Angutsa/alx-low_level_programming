#include "main.h"
#include <stdio.h>

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: string of 0 and 1 chars
  * Return: the converted number or 0 if the string has chars
  * that are not 0 or 1 or b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	int len, bit = 0, i = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
	{
		if ((b[len] == '0') || (b[len] == '1'))
			continue;
		return (0);
	}
	len--;

	for (; i <= len; i++)
	{
		bit = b[len - i] - 48;
		num += bit << i;
	}
	return (num);
}
