#include "main.h"

/**
 * _strspn - it is an function that gets the length of a prefix substring.
 * @s: it is a string.
 * @accept: is a bytes.
 * Return: r
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int u, r;

	for (u = 0; s[u] != '\0'; u++)
	{
		for (r = 0; accept[r] != s[u]; r++)
		{
			if (accept[r] == '\0')
			{
				return (u);
			}
		}
	}
	return (u);
}
