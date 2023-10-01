#include "main.h"
#include <stdio.h>

/**
 * more_numbers - this print 0 - 14 ten times
 *
 * Return: always 0
*/

void more_numbers(void)
{
	int nun, row, coun;

	for (row = 1; row <= 10; row++)
	{
		for (coun = 0; coun <= 14; coun++)
		{
			nun = coun;
			if (coun > 9)
			{
				_putchar(1 + 48);
				nun = coun % 10;
			}
			_putchar(nun + 48);
		}
		_putchar('\n');
	}
}
