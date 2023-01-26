#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_all - prints anything
  * @format: list of types of arguments passed to the function
  */
void print_all(const char * const format, ...)
{
	va_list(ptr);
	int i = 0;
	char *s;
	char x;

	va_start(ptr, format);
	while (format[i] != '\0')
	{
		x = format[i];
		switch (x)
		{
		case 'c':
			printf("%c", va_arg(ptr, int));
			break;
		case 'i':
			printf("%d", va_arg(ptr, int));
			break;
		case 'f':
			printf("%f", va_arg(ptr, double));
			break;
		case 's':
			s = va_arg(ptr, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		default:
			i++;
			continue;
		}
		while (format[i + 1] != '\0')
		{
			printf(", ");
			break;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
