#include "main.h"

/**
  * times_table - prints the 9 multiplication table
  * @void: no arguments
  * Description: prints the 9 times table in columns
  * Return: does not have a return
  */

void times_table(void)
{
	int prd = 0;
	int row = 0;
	int col = 0;

	for (;;)
	{
		prd = row * col;
		if (prd == 0)
		{
			if (col != 0)
				_putchar(' ');
			_putchar('0');
		}
		else if (prd > 0 && prd < 10)
		{
			_putchar(' ');
			_putchar('0' + prd);
		}
		else
		{
			_putchar('0' + prd / 10);
			_putchar('0' + prd % 10);
		}

		col++;
		if (col == 10)
		{
			col = 0;
			row++;
			_putchar('\n');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
		}

		if (prd == 81)
			break;
	}
}
