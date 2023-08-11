#include "main.h"
#include <stdlib.h>

/**
 * _realloc - it is the Main Entry.
 * @ptr: it is input.
 * @old_size: it is input.
 * @new_size: it is input.
 * Return: 0 or NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *b;
	unsigned int l, m;
	char *oldp = ptr;

	m = new_size;

	if (ptr == NULL)
	{
		b = malloc(new_size);
		return (b);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	b = malloc(new_size);
	if (b == NULL)
		return (NULL);
	if (new_size > old_size)
		m = old_size;
	for (l = 0; l < m; l++)
		b[l] = oldp[l];
	free(ptr);
	return (b);
}
