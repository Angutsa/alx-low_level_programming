#include "main.h"

/**
  * _pow_recursion - returns the value of x raised to power of y
  * @x: number to be exponentiated
  * @y: power to raise to
  * Return: int - number raised to power of y or -1 if the number is
  * less than 0
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, (y - 1)));
}
