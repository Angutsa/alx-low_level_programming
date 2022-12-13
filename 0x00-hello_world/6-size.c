#include <stdio.h>

/**
  * main - prints out size of different variable types
  * @void: Takes no input
  * Description: The function prints out the sizes of a char, int, long int,
  * long long int and float. This is based on the system it is currently
  * running on.
  * Return: Returns 0 if successful
  */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(float));
	return (0);
}
