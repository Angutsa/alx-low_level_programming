#include "main.h"

/**
  * jack_bauer - prints every minute of the day
  * @void: no arguments
  * Return: does not return
  */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	for (;;)
	{
		_putchar('0' + hours / 10);
		_putchar('0' + hours % 10);
		_putchar(':');
		_putchar('0' + minutes / 10);
		_putchar('0' + minutes % 10);
		_putchar('\n');

		minutes++;

		if (minutes == 60)
		{
			minutes = 0;
			hours++;
		}

		if (hours == 24)
			break;
	}
}
