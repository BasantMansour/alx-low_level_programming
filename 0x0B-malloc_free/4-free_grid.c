#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously created.
 * @grid: it is grid of the memory.
 * @height:it is  int.
 * Return: (void).
*/

void free_grid(int **grid, int height)
{
	int h = 0;

	for (; h < height; h++)
		free(grid[h]);
	free(grid);
}
