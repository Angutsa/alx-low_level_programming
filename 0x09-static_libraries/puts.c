#include "main.h"

/**
  * _puts - prints a string followed by a new line to stdout
  * @str: pointer to the string to be printed
  * Return: no return
  */
void _puts(char *str)
{
	int ltr = 0;

	for (;;)
	{
		if (*(str + ltr) == '\0')
		{
			_putchar('\n');
			break;
		}

		_putchar(*(str + ltr));
		ltr++;
	}
}
