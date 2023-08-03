#include "main.h"
#include  <stdio.h>

/**
 * _sqrt_recursion - find natural square root
 * @c: int
 * @kal: square root
 * Return: int
*/

int square(int c, int kal);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square  - find natural square root
 * @c: int
 * @kal: square root
 * Return: int
*/

int square(int c, int kal)
{

	if (kal * kal == c)
		return (kal);
	else if (kal * kal < c)
		return (square(c, kal + 1));
	else
		return (-1);
}
