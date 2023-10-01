#include "main.h"
#include <stdio.h>

/**
 * print_square - this print square using
 *			the character #
 * @size: this is a size of square
 *
 * Return: 0 always
*/

void print_square(int size)
{
	int row, colu;

	for (row = 1; row <= size; row++)
	{
		for (colu = 1; colu <= size; colu++)
			_putchar('#');

		_putchar('\n');
	}
}
