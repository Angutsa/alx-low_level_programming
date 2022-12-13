#include <stdio.h>
/**
  * main - Prints the hexadecimal numbers
  * @void: Does not need an argument
  * Description: The function uses putchar only to print hexadecimal
  * numbers with the characters in lowercase. It follows with a new line..
  * Return: Returns 0 if successful
  */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	for (i = 97; i < 103; i++)
	{
		putchar(i);
		if (i == 102)
			putchar('\n');
	}
	return (0);
}
