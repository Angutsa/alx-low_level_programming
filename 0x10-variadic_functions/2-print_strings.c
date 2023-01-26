#include <stdarg.h>
#include <stdio.h>

#include "variadic_functions.h"

/**
  * print_strings - prints strings followed by a new line
  * @separator: string separating the numbers
  * @n: number of strings passed to the function
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	int i;
	char *s;

	va_start(ptr, n);

	for (i = 0; i < (int) n; i++)
	{
		s = va_arg(ptr, char *);
		if ( s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator != NULL && i != (int) (n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(ptr);
}
