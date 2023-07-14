#include "main.h"

/**
 * *string_nconcat - it is function that concatenates two strings.
 * @s1: it is pointer.
 * @s2: it is pointer.
 * @n: it is number of bytes.
 * Return: m or NULL.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int e, a, S1, S2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (S1 = 0; s1[S1] != '\0'; S1++)
		;
	for (S2 = 0; s2[S2] != '\0'; S2++)
		;
	m = malloc(S1 + n + 1);
	if (m == NULL)
	{
		return (NULL);
	}
	for (e = 0; s1[e] != '\0'; e++)
		m[e] = s1[e];
	for (a = 0; a < n; a++)
	{
		m[e] = s2[a];
		e++;
	}

	m[e] = '\0';
	return (m);
}
