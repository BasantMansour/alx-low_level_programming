#include "main.h"

/**
 * free_grid - this free to the grid
 * @grid: gride to memorise
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
