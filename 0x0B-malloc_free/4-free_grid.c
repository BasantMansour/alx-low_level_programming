#include "main.h"

/**
 * free_grid - this free to the grid
 * @grid: gride to memorise
 * @height: int
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int p = 0;

	for (; p < height; p++)
		free(grid[p]);
	free(grid);
}
