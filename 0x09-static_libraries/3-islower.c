#include "main.h"

/**
 * _islower - function to cheak if
 *
 * @c: checks input of function
 *
 * Return: Always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
