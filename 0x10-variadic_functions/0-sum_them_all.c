#include "variadic_functions.h"


/**
 * sum_them_all - this is sums variable arguments
 * @n: its a number of argument
 * @...: this integers of sum
 *
 * Return: this integer sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int d = 0, y = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (y--)
		d += va_arg(ap, int);
	va_end(ap);
	return (d);
}
