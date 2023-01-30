#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @p: string to change case
 * Return: modified string
 */
char *string_toupper(char *p)
{
	int b = 0;

	while (p[b])
	{
		if (p[b] >= 97 && p[b] <= 122)
			p[b] -= 32;

		b++;
	}

	return (p);
}
