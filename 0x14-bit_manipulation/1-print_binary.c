#include "main.h"
#include <stdio.h>

/**
 * print_binary - this print a number of string
 * @n: this is a number to print
 *
 * Return: void
*/

void print_binary(unsigned long int n)
{
	int bin = sizeof(n) * 8, printed = 0;

	while (bin)
	{
		if (n & 1L << --bin)
		{
			putchar('1');
			printed++;
		}
		else if (printed)
			putchar('0');
	}
	if (!printed)
		putchar('0');
}
