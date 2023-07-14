#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b: it is a b
 * Return: s or NULL.
*/

void *malloc_checked(unsigned int b)
{
	int *s = malloc(b);

	if (s == 0)
	{
		exit(98);
	}

	return (s);
}
