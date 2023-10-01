#include "main.h"
#include <stdio.h>

/**
 * print_numbers - this is print 0 - 9
 *
 * Return: 0 always
*/

void print_numbers(void)
{
	int nun = 0;

	do {
		_putchar(nun + 48);
		nun++;
	} while (nun >= 0 && nun <= 9);
	_putchar('\n')
}
