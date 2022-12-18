#include <stdio.h>
/**
  * main - prints all possible combinations of two digit numbers
  * @void: no input
  * Description: Prints all possible combinations of two digits without
  * repeating the digits (i.e 10 and 01 are considered the same
  * combination of two digits). The digits printed are not the same and
  * are printed in ascending order.
  * Return: 0 on success
  */
int main(void)
{
	int n1 = 0;
	int n2 = 0;

	while (n1 < 10)
	{
		while (n2 < 10)
		{
			if (n1 != n2 && n1 < n2)
			{
				putchar('0' + n1);
				putchar('0' + n2);
				if (n1 != 8 || n2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}

			n2++;
		}

		n2 = 0;
		n1++;
	}
	putchar('\n');
	return (0);
}
