#include "main.h"

/**
 * _sqrt_recursion - natural square root of a number
 * @n: intput mumber
 * @kal: square root
 * Return: kal, -1
*/

int square(int n, int kal);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - function that print square root of number
 * @n: the input number
 * @kal: square of number
 * Return: the square of number
*/

int square(int n, int kal)
{
	if (kal * kal == n)
		return (kal);
	else if (kal * kal < n)
		return  (square(n, kal + 1));
	else
		return (-1);
}
