#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints the sum of the diagonals of a square matrix
  * @a: pointer to first element of the matrix
  * @size: size of the matrix
  */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = (size * size) - size;
	int sum1 = 0;
	int sum2 = 0;

	while (i <= (size * size))
	{
		sum1 += *(a + i);
		i += (size + 1);

		sum2 += *(a + j);
		j -= (size - 1);
	}
	printf("%i, %i\n", sum1, sum2);
}
