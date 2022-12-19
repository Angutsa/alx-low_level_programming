#include "main.h"

/**
  * rev_string- prints a string in reverse order
  * @s: pointer to the string to be reversed
  */
void rev_string(char *s)
{
	int strlen = 0;
	int i;
	char a;

	for (;;)
	{
		if (*(s + strlen) == '\0')
		{
			strlen--;
			break;
		}
		strlen++;
	}

	for (i = 0; i <= strlen; i++)
	{
		a = *(s + i);
		*(s + i) = *(s + (strlen - i));
		*(s + strlen - i) = a;

		if (i == (strlen / 2))
			break;

	}

}

