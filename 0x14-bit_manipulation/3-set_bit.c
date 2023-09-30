#include "main.h"
#include <stdio.h>

/**
 * set_bit - this sets the bit at the index
 * @n: this is the number to index
 * @index: this bit to sit
 *
 * Return: 1 or -1 on error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
