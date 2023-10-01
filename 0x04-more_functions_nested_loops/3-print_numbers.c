#include "main.h"
#include <stdio.h>

/**
 * print_numbers - this is print 0 - 9
 *
 * Return: 0 always
*/

void print_numbers(void)
{
	int number = 0;

	do {
		putchar(number + 48);
		number++;
	} while (number >= 0 && number <= 9);
	putchar('\n')
}
