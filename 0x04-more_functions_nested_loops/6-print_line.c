#include "main.h"

/**
  * print_line - draws a straight line on the terminal
  * @n: The number of lines to be drawn
  */
void print_line(int n)
{
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
