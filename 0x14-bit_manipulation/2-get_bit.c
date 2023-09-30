#include "main.h"
#include <stdio.h>

/**
 * get_bit - this gets the bit at the index
 * @n: this is the number to index
 * @index: this bit to get
 *
 * Return: -1 on error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
