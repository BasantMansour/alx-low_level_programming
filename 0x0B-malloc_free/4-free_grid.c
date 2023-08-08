#include "main.h"

/**
 * free_grid - this is free the grid
 * @grid: this grid of memorise
 * @height: int
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int h = 0;

	for (; h < height; h++)
		free(grid[h]);
	free(grid);
}
