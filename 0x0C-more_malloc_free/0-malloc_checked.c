#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b: it is a b
 * Return: r or NULL.
*/

void *malloc_checked(unsigned int b)
{
	int *r = malloc(b);

	if (r == 0)
	{
		exit(98);
	}

	return (r);
}
