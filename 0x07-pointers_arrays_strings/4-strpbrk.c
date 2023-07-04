#include "main.h"

/**
 **_strpbrk - is a function that searches a string for any of a set of bytes.
 * @s: it is a string.
 * @accept: it is a string.
 * Return: p
*/

char *_strpbrk(char *s, char *accept)
{
	int h, y;
	char *p;

	h = 0;

	while (s[h] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[h])
			{
				p = &s[h];
				return (p);
			}
			y++;
		}
		h++;
	}
	return (0);
}
