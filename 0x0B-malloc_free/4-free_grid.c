#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free a 2D grid
 * @grid: 2D
 * @height: dimension of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
