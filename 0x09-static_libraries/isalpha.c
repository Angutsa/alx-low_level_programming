#include "main.h"

/**
  * _isalpha - checks for an alphabetic character
  * @c: the character to be checked
  *
  * Description: Checks for an alphabetic character
  * Return: Returns 1 if c is an alphabetic character
  * Returns 0 if c is not an alphabetic character
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
