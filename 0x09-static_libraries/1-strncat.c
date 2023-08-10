#include "main.h"

/**
 * *_strncat -  function that concatenates two strings.
 * @dest: is an input.
 * @src: is an input.
 * @n: is number of char.
 * Return: string of dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int r, v;

	r = 0;

	while (dest[r])
		r++;

	for (v = 0; v < n && src[v] != '\0'; v++)
		dest[r + v] = src[v];
	dest[r + v] = '\0';

	return (dest);
}
