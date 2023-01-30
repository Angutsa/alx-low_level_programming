#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers 1-100 with FizzBuzz replacements
 * Description: Prints the numbers 1-100. Program prints Fizz for
 * multiples of 3, Buzz for multiples of 5 and FizzBuzz for multiples
 * of both 3 and 5.
 * Return: returns 0 on success
 */
int main(void)
{
	int b;

	for (b = 1; b <= 100; b++)
	{
		if ((b % 3) == 0)
			printf("Fizz");

		if ((b % 5) == 0)
			printf("Buzz");

		if ((b % 3) != 0 && (b % 5) != 0)
			printf("%i", b);

		if (b < 100)
			printf(" ");
	}

	printf("\n");
	return (0);
}

