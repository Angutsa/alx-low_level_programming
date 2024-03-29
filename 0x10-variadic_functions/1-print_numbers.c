#include <stdarg.h>
#include <stdio.h>

#include "variadic_functions.h"

/**
  * print_numbers - prints numbers followed by a new line
  * @separator: string separating the numbers
  * @n: number of integers passed to the function
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	int i;

	va_start(ptr, n);

	for (i = 0; i < (int) n; i++)
	{
		printf("%d", va_arg(ptr, int));

		if (separator != NULL && i != (int) (n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(ptr);
}
