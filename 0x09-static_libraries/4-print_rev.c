#include "main.h"

/**
 * print_rev - prints reversed string
 *
 * @s: pointer to the string to print
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
