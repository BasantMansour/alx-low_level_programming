#include "main.h"
#include <stdio.h>

/**
 * print_line - this is to print a straight line
 *
 * @n: this a number of times to print character
*/

void print_line(int n)
{
	int chr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (chr = 1; chr <= n; chr++)
			_putchar('_');
		_putchar('\n');
	}
}
