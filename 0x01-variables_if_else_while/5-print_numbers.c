#include <stdio.h>
/**
  * main - Prints all single digits in base 10 from 0
  * @void: Does not need an argument
  * Description: The function prints all single digits in base 10 followed
  * by a new line.
  * Return: Returns 0 if successful
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
		if (i == 9)
			printf("\n");
	}
	return (0);
}
