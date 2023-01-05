#include "main.h"

/**
  * factorial - returns the factorial of a given number
  * @n: number whose factorial is to be determined
  * Return: int - factorial of the number or -1 - error, the number
  * is less than 1
  */
int factorial(int n)
{
	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
