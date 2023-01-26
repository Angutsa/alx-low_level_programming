#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - sums all the parameters provided
  * @n: number of parameters passed
  * Return: sum of all the parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < (int) n; i++)
	{
		sum += va_arg(ptr, int);
	}
	return (sum);
}
