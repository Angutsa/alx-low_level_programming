#include "main.h"

/**
  * _isupper - checks if letter is uppercase
  * @b: letter to check
  * Return: returns 1 on success and 0 on failure
  */
int _isupper(int b)
{
	if (b >= 65 && b <= 90)
	{
		return (1);
	}

	return (0);
}
