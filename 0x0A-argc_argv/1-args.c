#include <stdio.h>
#include <stdlib.h>

/**
  * main - program prints number of arguments passed to it
  * @argc: Argument Count
  * @argv: Argument Vector
  * Return: EXIT_SUCCESS on success
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (EXIT_SUCCESS);
}
