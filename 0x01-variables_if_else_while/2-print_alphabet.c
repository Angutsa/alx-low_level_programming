#include <stdio.h>
/**
  * main - Prints the entire lowercase alphabet
  * @void: Does not need an argument
  * Description: The function uses putchar only to print the entire alphabet
  * in lowercase and follow it up with a new line.
  * Return: Returns 0 if successful
  */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
		if (i == 122)
			putchar('\n');
	}
	return (0);
}
