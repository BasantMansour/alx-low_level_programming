#include "main.h"

/**
 * *_memcpy - it is a function that copies memory area.
 * @dest: is an arry.
 * @src: it is an source.
 * @n: it is an number to copy.
 * Return: dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int u;

	for (u = 0; u < n; u++)
	{
		dest[u] = src[u];
	}
	return (dest);
}
