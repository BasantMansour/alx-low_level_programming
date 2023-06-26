#include "main.h"

/**
 * swap_int - swap the tow value of two integers
 *
 * @a: input
 * @b: input
*/

void swap_int(int *a, int *b)
{
	int ba;

	ba = *a;
	*a = *b;
	*b = ba;
}
