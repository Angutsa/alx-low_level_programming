#include <stdio.h>

/**
  * main - Prints all possible combinations of single digit numbers
  * @void: Does not need any input
  * Description: The function prints all possible combinations of single
  * digit numbers in ascending order. Each of these is printed in ascending
  * order using only the putchar function.
  * Return: Returns 0 if successful
  */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar (i);
		if (i != 57)
		{
			putchar (',');
			putchar (' ');
		}
		else
		{
			putchar ('\n');
		}
	}
	return (0);
}
