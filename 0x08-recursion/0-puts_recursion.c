#include "main.h"

/**
 * _puts_recursion - print string followed by new line
 * @s: in put of string
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
