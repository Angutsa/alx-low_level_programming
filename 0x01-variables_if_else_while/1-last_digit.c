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
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n",
				n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n",
				n, last);
	}
	return (0);
}
