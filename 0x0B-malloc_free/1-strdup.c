#include "main.h"

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0
*/

char *_strdup(char *str)
{
	int p = 0, size = 0;
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
		for (; p < size; p++)
			n[p] = str[p];
	}
	return (n);
}
