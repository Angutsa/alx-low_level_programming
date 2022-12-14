#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - prints numbers from n to 98 in order
  * @n: number to begin printing from
  * Description: Prints all integers from n to 98 in order. 98 is always
  * the last number on the list. The numbers are separated by commas and a
  * space.
  * Return: Does not return anything
  */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%i, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%i, ", i);
		}
	}
	printf("98\n");
}
