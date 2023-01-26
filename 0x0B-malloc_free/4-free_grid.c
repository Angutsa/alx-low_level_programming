#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * free_grid - frees the 2D array in alloc_grid function
  * @grid: pointer to the grid
  * @height: height of the grid
  */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height == 0)
		return;

	free(grid[height - height]);
	free(grid);
}
