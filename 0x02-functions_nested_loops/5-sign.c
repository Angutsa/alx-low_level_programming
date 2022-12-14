#include "main.h"

/**
  * print_sign - prints the sign of a number
  * @n: the number to be checked
  *
  * Description: Prints the sign of a number: + if n is greater than zero,
  * 0 if the number is zero and - if the number is less than 0
  *
  * Return: Returns 1 if n is greater than 0,
  * returns 0 if the number is 0 and,
  * return -1 if the number is less than 0.
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

