#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - this is make Main Entry
 * @s1: input
 * @s2: input
 * @n: input
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int p, j, l;
	char *s;

	if (s1 == NULL)
		p = 0;
	else
	{
		for (p = 0; s1[p]; p++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (p + j + 1));
	if (s == NULL)
		return (NULL);
	for (l = 0; l < p; l++)
		s[l] = s1[l];
	for (l = 0; l < j; l++)
		s[l + p] = s2[l];
	s[p + j] = '\0';
	return (s);
}
