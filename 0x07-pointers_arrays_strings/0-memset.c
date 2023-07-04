#include "main.h"

/**
 * *_memset - It is function that fills memory with a constant byte.
 * @s: is a pointer.
 * @n: is a number of bytes.
 * @b: is a char.
 * Return: s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0; n > 0; r++, n--)
	{
		s[r] = b;
	}

	return (s);
}
