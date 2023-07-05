#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: input of a string
 * Return: length of string
*/

int _strlen_recursion(char *s)
{
	int tr = 0;

	if (*s > '\0')
	{
		tr += _strlen_recursion(s + 1) + 1;
	}

	return (tr);
}
