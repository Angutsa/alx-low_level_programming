#include <stdio.h>
#include <string.h>
/**
  * main - prints string to the standard error
  * @void: no inputs
  * Return: On success returns 1
  */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(msg, strlen(msg), 1, stderr);

	return (1);
}
