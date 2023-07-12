#include "main.h"
#include <stdlib.h>
/**
  *free_grid-  frees a 2 dimensional grid
  *@grid: grid being freed
  *@height: height input
  *Return: void
  */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}

