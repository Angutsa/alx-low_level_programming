#include "main.h"

int _sqrt(int low, int high, int x);

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: number to square root
  * Return: int - natural square root of the number
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(0, n, n));
}

/**
  * _sqrt - calculates the sqaure root of a number using binary search
  * @high: the upper limit of the square root
  * @low: the lower limit of the square root
  * @x: sqaure number
  * Return: sqaure root of the number
  */
int _sqrt(int low, int high, int x)
{
	int y = (low + high) / 2;

	if (low > high)
		return (-1);

	if ((y * y) == x)
		return (y);

	if ((y * y) > x)
	{
		return (_sqrt(low, y - 1, x));
	}
	else
	{
		return (_sqrt(y + 1, high, x));
	}
}
