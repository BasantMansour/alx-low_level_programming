#include "main.h"
#include  <stdio.h>

/**
 * _puts_recursion - this print the string and new line
 * @s: pointers to the string
 * Return: void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
