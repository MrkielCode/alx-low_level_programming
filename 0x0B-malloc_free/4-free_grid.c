#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function to free memory
 * @grid: 2d grid
 * @height: height of the 2d grid
 * Return: free memory
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
