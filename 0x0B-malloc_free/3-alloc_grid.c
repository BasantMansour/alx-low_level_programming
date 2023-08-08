#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 array of integers
 * @width: int
 * @height: int
 * Return: 2 array
*/

int **alloc_grid(int width, int height)
{
	int **tab, y, x;

	tab = malloc(sizeof(*tab) * height);

	if (width <= 0 || height <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (y = 0; y < height; y++)
		{
			tab[y] = malloc(sizeof(**tab) * which);
			if (tab[y] == 0)
			{

				while (y--)
					free(tab[y]);
				free(tab);
				return (NULL);
			}

			for (x = 0; x < width; x++)
				tab[y][x] = 0;
		}
	}

	return (tab);
}
