#include "main.h"

/**
 * *_strncpy -  function that copy two strings.
 * @dest: is an input.
 * @src: is an input.
 * @n: is number of char.
 * Return: string of dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[b] = src[b];

	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
