#include "variadic_functions.h"


/**
 * sum_them_all - this is sums of all pointers
 * @n: its a number of argument
 * @...: this integers of sum
 *
 * Return: 0 if n == 0 or if else
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int d = 0, s = 0;
	va_list pp;

	if (n == 0)
		return (0);

	va_start(pp, n);

	for (d = 0; d < n; d++)
	{
		s = s + va_arg(pp, unsigned int);
	}
	va_end(pp);

	return (s);
}
