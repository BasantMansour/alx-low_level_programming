#include "main.h"
#include <stdlib.h>

/**
 * _calloc - this is Main Entry
 * @nmemb: input
 * @size: input
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *y;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	y = malloc(nmemb * size);
	if (y == NULL)
		return (NULL);
	for (j = 0; j < (nmemb * size); j++)
		y[j] = 0;
	return (y);
}
