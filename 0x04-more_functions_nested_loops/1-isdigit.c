#include "main.h"
#include <stdio.h>

/**
 * _isdigit - this to check the input between 0 - 9
 *
 * @c: this is input
 *
 * Return: 1 or 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
