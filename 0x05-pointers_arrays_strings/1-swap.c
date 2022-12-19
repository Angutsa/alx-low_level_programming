#include "main.h"

/**
  * swap_int - swaps the value of two integers
  * @a: pointer to first integer
  * @b: pointer to second integer
  * Description: Swaps the values stored at the memory locations in
  * the addresses pointed to by a and b.
  * Return: no return
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
