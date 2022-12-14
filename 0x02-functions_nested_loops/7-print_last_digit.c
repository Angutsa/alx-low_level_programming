#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @m: number to be checked
  * Description: prints the last value of a number
  * Return: value of the last digit
  */
int print_last_digit(int m)
{
	if (m < 0)
		m *= -1;

	 _putchar('0' + (m % 10));
	return (m % 10);
}
