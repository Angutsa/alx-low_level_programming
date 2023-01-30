#include "main.h"

/**
  * _isdigit - checks for a digit (0 through 9)
  * @c: number to check
  * Return: 1 if the character will be a digit and 0 for any else
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
