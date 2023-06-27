#include "main.h"

/**
 * _puts - prints a string followed by new line
 *
 * @str: string prints
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
