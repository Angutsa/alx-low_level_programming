#include "main.h"

/**
  * _islower - Checks if a character is in lowercase
  * @c: The character to be checked
  * Description: Checks if the character passed is in lowercase or not.
  * Return: Returns 1 if c is lowercase
  * Returns 0 if c is not lowercase
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
