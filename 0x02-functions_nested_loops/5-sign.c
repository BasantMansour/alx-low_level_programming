#include "main.h"

/**
 * print_sign - this function to print sign to the input
 * if it + , - , 0
 *
 * @n: type input of function
 *
 * Return: 1 if +, 0 if 0, -1 if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
