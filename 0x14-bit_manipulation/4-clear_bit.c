#include "main.h"
#include <stdio.h>

/**
 * clear_bit - this clear the bit at the index
 * @n: this is the number to index
 * @index: this bit to clear
 *
 * Return: 1 or -1 on error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
