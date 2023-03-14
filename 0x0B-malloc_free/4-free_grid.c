#include <stdlib.h>
#include "main.h"

/**
  *free_grid - free allocated memory
  *@grid: array of pointers
  *@height: length of array
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
	for (i = height; i >= 0; --i)
		free(grid[i]);
	free(grid);
	}
}
