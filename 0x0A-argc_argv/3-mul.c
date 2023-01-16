#include <stdio.h>
#include <stdlib.h>

/**
  * main - program prints the product of two numbers
  * @argc: Argument Count
  * @argv: Argument Vector containing number to be multiplied
  * Return: EXIT_SUCCESS on success; 1 on fail
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%i\n", (atoi(argv[1]) * atoi(argv[2])));
	return (EXIT_SUCCESS);
}
