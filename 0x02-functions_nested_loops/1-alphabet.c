#include "main.h"

/**
  * main - writes the alphabet using a function
  *
  * Return: Always 0
  */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
  * print_alphabet - write lowercase alphabet
  *
  * Description: Prints the alphabet in lowercase followed by a new line
  *
  */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
