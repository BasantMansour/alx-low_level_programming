#include "variadic_functions.h"

/**
 * print_numbers - this print number of separator
 * @separator: this string separator
 * @n: this number of arguments
 * @...: this integer to print
 *
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int u = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (u--)
		printf("%d%s", va_arg(ap, int);
				u ? (separator ? separator : "") : "\n");
	va_end(ap);
}
