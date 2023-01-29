#include "main.h"

/**
 * _isupper - checks if a letter is in uppercase
 * @b: Letter to check
 *
 * Return: 1 for uppercase letter or 0 for anything else
 */

int _isupper(int b)
{
	if (b >= 65 && b <= 90)
	{
		return (1);
	}

	return (0);
}