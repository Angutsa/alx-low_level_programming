#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @m: number to be checked
  * Description: prints the last value of a number
  * Return: value of the last digit
  */
int print_last_digit(int m)
{
	int last_digit = m % 10;

	if (last_digit < 0)
		last_digit = last_digit * -1;

	_putchar('0' + last_digit);
	return (last_digit);
}
