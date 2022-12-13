#include <stdio.h>
/**
  * main - Prints the numbers 0 to 9
  * @void: Does not need an argument
  * Description: The function uses putchar only to print the numbers 0 to 9
  * and follow it up with a new line.
  * Return: Returns 0 if successful
  */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
			putchar('\n');
	}
	return (0);
}
