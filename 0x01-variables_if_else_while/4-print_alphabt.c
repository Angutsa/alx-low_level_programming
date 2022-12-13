#include <stdio.h>
/**
  * main - Prints the entire lowercase alphabet except q and e
  * @void: Does not need an argument
  * Description: The function uses putchar only to print the entire alphabet
  * in lowercase and follow it up with a new line. It skips the letters "q"
  * and "e".
  * Return: Returns 0 if successful
  */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
			continue;

		putchar(i);
		if (i == 122)
			putchar('\n');
	}
	return (0);
}
