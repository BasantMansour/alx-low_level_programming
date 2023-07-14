#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b: it is a b
 * Return: r or NULL.
*/

void *malloc_checked(unsigned int b)
{
	int *d = malloc(b)

	if (d == 0)
	{
		exit(98);
	}

	return (d);
}
