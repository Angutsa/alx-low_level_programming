#include "main.h"
#include <stdio.h>

/**
  * print_array - prints n items from array
  * @a: array to be used
  * @n: number of items to print
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", *(a + i));

		if (i == (n - 1))
			break;

		printf(", ");
	}
	printf("\n");
}

