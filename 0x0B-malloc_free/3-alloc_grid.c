#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * alloc_grid - returns a pointer to a 2 dim. array of integers
  * @width: width of matrix
  * @height: height of matrix
  * Return: pointer to 2 dimensional array
  */
int **alloc_grid(int width, int height)
{
	int i, j, num = width * height;
	int **rows;
	int *x;

	if (width <= 0 || height <= 0)
		return (NULL);

	rows = malloc(sizeof(int *) * height);
	if (rows == NULL)
		return (NULL);

	x = malloc(sizeof(int) * num);
	if (x == NULL)
	{
		free(rows);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		rows[i] = x + (i * width);

		for (j = 0; j < width; j++)
		{
			*(rows[i] + j) = 0;
		}
	}

	return (rows);
}
