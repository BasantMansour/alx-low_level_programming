#include "main.h"

/**
 * **alloc_grid - function that returns a 2 dimensional array of integers.
 * @width: it is int.
 * @height: it is int.
 * Return: two array.
*/

int **alloc_grid(int width, int height)
{
	int **E, m, a;

	E = malloc(sizeof(*E) * height);

	if (width <= 0 || height <= 0 || E == 0)
	{
		return (NULL);
	}
	else
	{
		for (m = 0; m < height; m++)
		{
			E[m] = malloc(sizeof(**E) * width);
			if (E[m] == 0)
			{
				while (m--)
					free(E[m]);
				free(E);
				return (NULL);
			}

			for (a = 0; a < width; a++)
				E[m][a] = 0;
		}
	}

	return (E);
}
