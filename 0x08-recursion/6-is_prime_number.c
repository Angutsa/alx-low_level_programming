#include "main.h"

int is_prime(int x, int y);

/**
  * is_prime_number - determines if a number is a prime number
  * @n: number to check
  * Return: 1 if the number is prime or 0 if it is not prime
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2)
		return (1);

	return (is_prime(n, 2));
}

/**
  * is_prime - looks for a prime number
  * @x: number to check
  * @y: factor to test
  * Return: 1 if the number is prime or 0 if it is not prime
  */
int is_prime(int x, int y)
{
	if (x % y == 0)
		return (0);

	if (y * y > x)
		return (1);

	return (is_prime(x, y + 1));
}

