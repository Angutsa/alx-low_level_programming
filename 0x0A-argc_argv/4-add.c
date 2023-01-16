#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * main - adds positive numbers in given arguments
  * @argc: Argument Count
  * @argv: Argument Vector
  * Return: EXIT_SUCCESS on success
  */
int main(int argc, char *argv[])
{
	int j;
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (EXIT_SUCCESS);
	}

	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];

		for (j = 0; j < (int) strlen(num); j++)
		{
			if (isdigit(num[j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(num);
	}

	printf("%i\n", sum);
	return (EXIT_SUCCESS);
}
