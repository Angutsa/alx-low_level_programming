#include "main.h"

/**
  * print_rev - prints a string in reverse order
  * @s: pointer to the string to be printed
  */
void rev_string(char *s)
{
	int strlen = 0;
	char rev[] = *s;
	int i;
	char *rev = s;

	for (;;)
	{
		if (*(s + strlen) == '\0')
			break;
		strlen++;
	}

	for (strlen -= 1, i = 0; strlen >= 0; strlen--, i++)
	{
		*(s + i) = *(rev + strlen);
	}
}

