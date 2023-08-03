#include "main.h"
#include  <stdio.h>

/**
 * _strlen_recursion - this return the length of string
 * @s: pointers of string
 * Return: int
*/

int _strlen_recursion(char *s)
{
	int nr = 0;

	if (*s > '\0')
	{
		nr += _strlen_recursion(s + 1) + 1;
	}

	return (nr);
}
