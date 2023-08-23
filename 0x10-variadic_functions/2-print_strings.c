#include "variadic_functions.h"

/**
 * print_strings - this is print string with separator
 * @separator: this string separator
 * @n: this number of argument
 * @...: its string to print
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int y = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (y--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				y ? (separator ? separator : "") : "\n");
	va_end(ap);
}
