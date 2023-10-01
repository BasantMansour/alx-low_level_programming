#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - this print 0 - 9 apart
 *			from 2 and 4
 * Return: always 0
*/

void print_most_numbers(void)
{
	int nun;

	for (nun = 0; nun <= 9; nun++)
	{
		if (nun == 2 || nun == 4)
			continue;
		_putchar(nun + 48);
	}
	_putchar('\n');
}
