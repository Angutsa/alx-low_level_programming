#include "main.h"

/**
  * print_alphabet_x10 - write lowercase alphabet ten times
  *
  * Description: Prints the alphabet in lowercase followed by a new line ten
  * times.
  *
  */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
