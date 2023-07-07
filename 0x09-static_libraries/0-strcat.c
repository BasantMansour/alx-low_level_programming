#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 * @dest: is input.
 * @src: is input.
 * Return: string of dest
*/

char *_strcat(char *dest, char *src)
{
	int p, o;

	p = 0;

	while (dest[p])
		p++;

	for (o = 0; src[o]; o++)
		dest[p++] = src[o];

	return (dest);
}
