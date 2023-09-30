#include "main.h"
#include <stdio.h>

/**
 * _isupper - this check if c supper
 *
 * @c: this input for alphabet
 *
 * Return: 1 or 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
