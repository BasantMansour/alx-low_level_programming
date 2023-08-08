#include "main.h"

/**
 * free_grid - this free to the grid
 * @grid: gride to memorise
 * @height: int
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
