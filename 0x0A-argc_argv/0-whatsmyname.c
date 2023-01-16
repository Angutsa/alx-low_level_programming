#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void printmyname(char *c[]);


/**
  * main - program prints its own name
  * @argc: Argument Count
  * @argv: Argument Vector
  * Return: EXIT_SUCCESS on success
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printmyname(argv);
	return (EXIT_SUCCESS);
}

/**
  * printmyname - prints the name of the program
  * @c: pointer to argv array
  */
void printmyname(char *c[])
{
	printf("%s\n", c[0]);
}
