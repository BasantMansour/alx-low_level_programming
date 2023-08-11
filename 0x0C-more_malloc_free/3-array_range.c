#include "main.h"
#include <stdlib.h>

/**
 * array_range - this is a Main Entry
 * @min: input
 * @max: input
 * Return: 0
 */
int *array_range(int min, int max)
{
	int j, l;
	int *b;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	b = malloc(sizeof(int) * l);
	if (b == NULL)
		return (NULL);
	for (j = 0; j < l; j++, min++)
	{
		b[j] = min;
	}
	return (b);
}
