#include "main.h"

/**
  * puts2 - prints every other character of a string starting with the
  * first character.
  * @str: string to be printed
  */
void puts2(char *str)
{
	int ltr = 0;

	for (;;)
	{
		if (*(str + ltr) == '\0')
			break;

		if ((ltr % 2) == 0)
		{
			_putchar(*(str + ltr));
		}
		ltr++;
	}
	_putchar('\n');
}
