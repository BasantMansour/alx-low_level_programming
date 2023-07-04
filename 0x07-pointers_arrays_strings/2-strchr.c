#include "main.h"

/**
 * *_strchr - it is a function that locates a character in a string.
 * @s: it is pointer.
 * @c: it is char.
 * Return: pointer s.
*/

char *_strchr(char *s, char c)
{
	int t;

	for (t = 0; s[t] >= '\0'; t++)
	{
		if (s[t] == c)
		{
			return (s + t);
		}
	}
	return ('\0');
}
