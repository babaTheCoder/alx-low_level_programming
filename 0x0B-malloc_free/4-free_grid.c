#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_grid - frees 2D array in alloc_grd
 *
 * @grid: 2D array to free
 * @height: height of array grid
 *
 * Return: 0 Always (success)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
