#include "main.h"

/**
  * puts_half - prints the last half of a string
  * @str: pointer to the string
  */
void puts_half(char *str)
{
	int ltr = 0;
	int half;

	for (;;)
	{
		if (*(str + ltr) == '\0')
			break;

		ltr++;
	}

	if ((ltr % 2) != 0)
		ltr -= 1;

	half = ltr / 2;

	for (;;)
	{
		if (*(str + half) == '\0')
		{
			_putchar('\n');
			break;
		}

		_putchar(*(str + half));
		half++;
	}
}
