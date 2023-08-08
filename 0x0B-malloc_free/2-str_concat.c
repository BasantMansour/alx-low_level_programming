#include "main.h"

/**
 * _strlen - find the length of string
 * @s: string
 * Return: int
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *str_concat - this concatnates two string
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	int size1, size2, o;
	char *n;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	n = malloc((size1 + size2) * sizeof(char) + 1);

	if (n == 0)
		return (0);

	for (o = 0; o <= size1 + size2; o++)
	{
		if (o < size1)
			n[o] = s1[o];
		else
			n[o] = s2[o - size1];
	}
	n[o] = '\0';
	return (n);
}
