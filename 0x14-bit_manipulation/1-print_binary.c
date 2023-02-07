#include "main.h"

/**
  * print_binary - prints the binary representation of a number
  * @n: number to convert to binary
  */
void print_binary(unsigned long int n)
{
	int rem = 0;
	unsigned long int num = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n == 1)
	{
		_putchar('1');
	}
	else
	{
		num = n >> 1;
		rem = n - (num << 1);
		print_binary(num);
		_putchar('0' + rem);
	}
}
