#include <stdio.h>
/**
  * main - Prints the entire lowercase alphabet in reverse
  * @void: Does not need an argument
  * Description: The function uses putchar only to print the entire alphabet
  * in lowercase in reverse and follow it up with a new line.
  * Return: Returns 0 if successful
  */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
		if (i == 97)
			putchar('\n');
	}
	return (0);
}
