#include "main.h"

/**
  * print_rev - prints a string in reverse order
  * @s: pointer to the string to be printed
  */
void print_rev(char *s)
{
	int ltr = 0;

	for (;;)
	{
		if (*(s + ltr) == '\0')
		{
			break;
		}
		ltr++;
	}

	for (ltr -= 1; ltr >= 0; ltr--)
	{
		_putchar(*(s + ltr));
	}
	_putchar('\n');
}

