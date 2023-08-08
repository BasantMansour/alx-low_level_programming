#include "main.h"

/**
 * _strdup - this return a pointer to a space in memory
 * @str: string
 * Return: 0
*/

char *_strdup(char *str)
{
	int u = 0, size = 0;
	char *n;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	n = malloc(size * sizeof(*str) + 1);

	if (n == 0)
	{
		return (NULL);
	}
	else
	{
		for (; u < size; u++)
			n[u] = str[u];
	}
	return (n);
}
