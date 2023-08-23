#include "variadic_functions.h"

/**
 * format_char - this is formats character
 * @separator: its string separator
 * @ap: its argument pointer
*/
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - this is formats integer
 * @separator: this is string separator
 * @ap: this is argument of pointer
*/
void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_float - this is format float
 * @separator: its string separator
 * @ap: this ia argument pointer
*/

void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_string - this is format string
 * @separator: its string separator
 * @ap: this argument pointer
*/
void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";

	printf("%s%s", separator, str);
}

/**
 * print_all - this is prints anything
 * @format: its format string
*/
void print_all(const char * const format, ...)
{
	int i = 0, g;
	char *separator = "";
	va_list ap;
	token_t tokens [] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
