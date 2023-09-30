#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - this binary number string to unsigned int
 * @b: this a binary number to string
 *
 * Return: unsigned int from b
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		number = number * 2 + (*b++ - '0');
	}
	return (number);
}
