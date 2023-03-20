#include "main.h"

/**
  * _abs - prints the absolute value of a number
  * @n: number whose absolute value is to be calculated
  *
  * Description: Prints the absolute value of a number
  *
  * Return: returns the absolute value of n
  */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
