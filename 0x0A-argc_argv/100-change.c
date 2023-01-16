#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints number of coins to make change
  * @argc: Argument Count
  * @argv: Total value of change
  * Description: Gives you the minimum number of coins to make
  * change for the amount given. The coins used are of vakues
  * 25, 10, 5, 2, and 1 cent.
  * Return: EXIT_SUCCESS on success; 1 on fail
  */
int main(int argc, char *argv[])
{
	int change;
	int coins = 0;
	int cents[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	if (change <= 0)
	{
		printf("0\n");
		return (EXIT_SUCCESS);
	}

	for (i = 0; i < 5; i++)
	{
		if (change == 0)
			break;

		if (change < cents[i])
			continue;

		coins += change / cents[i];
		change -= cents[i] * (change / cents[i]);
	}

	printf("%i\n", coins);
	return (EXIT_SUCCESS);
}


