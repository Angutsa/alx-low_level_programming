#include <stdio.h>
/**
  * main - prints all possible combinations of three digit numbers
  * @void: no input
  * Description: Prints all possible combinations of three digits without
  * repeating the digits (i.e 012, 120, 102, 021, 201, 210 are considered
  * the same combination of three digits). The digits printed are not
  * the same and are printed in ascending order.
  * Return: 0 on success
  */
int main(void)
{
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;

	while (n1 < 10)
	{
		while (n2 < 10)
		{
			if (n1 >= n2)
			{
				n2++;
				continue;
			}

			while (n3 < 10)
			{
				if (n3 > n2)
				{
					putchar('0' + n1);
					putchar('0' + n2);
					putchar('0' + n3);
					if (n1 != 7 || n2 != 8 || n3 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				n3++;
			}
			n3 = 0;
			n2++;
		}
		n2 = 0;
		n1++;
	}
	putchar('\n');
	return (0);
}
