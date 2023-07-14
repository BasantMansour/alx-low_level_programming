#include "main.h"

/**
 * *string_nconcat - it is function that concatenates two strings.
 * @s1: it is pointer.
 * @s2: it is pointer.
 * @n: it is number of bytes.
 * Return: c or NULL.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int e, a, S1, S2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (S1 = 0; s1[S1] != '\0'; S1++)
		;
	for (S2 = 0; s2[S2] != '\0'; S2++)
		;
	c = malloc(S1 + n + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	for (e = 0; s1[e] != '\0'; e++)
		c[e] = s1[e];
	for (a = 0; a < n; a++)
	{
		c[e] = s2[a];
		e++;
	}

	c[e] = '\0';
	return (c);
}
