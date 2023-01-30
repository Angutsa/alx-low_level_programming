#include "main.h"
/**
  * print_numbers - print numbers from 0 to 9
  * Return: The numbers from 0 to 9
  */
void print_numbers(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		_putchar('0' + b);
	}

	_putchar('\n');
}
