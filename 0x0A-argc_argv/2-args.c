#include <stdio.h>
#include <stdlib.h>

/**
  * main - program prints all arguments it receives
  * @argc: Argument Count
  * @argv: Argument Vector
  * Return: EXIT_SUCCESS on success
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (EXIT_SUCCESS);
}
