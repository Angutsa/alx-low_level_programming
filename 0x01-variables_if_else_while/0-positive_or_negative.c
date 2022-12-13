#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Shows if a random number is positive or negative
 * @void: Does not need any inputs
 * Description: Function generates a random number then determines if it
 * is positive or negative.
 * Return: returns 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}
	return (0);
}
