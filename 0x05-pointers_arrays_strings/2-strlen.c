#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: pointer to the string
  * Return: no return
  */
int _strlen(char *s)
{
	int ltr = 0;
	int count = 0;

	for (;;)
	{
		if (*(s + ltr) == '\0')
		{
			return (count);
		}
		ltr++;
		count++;
	}
}
