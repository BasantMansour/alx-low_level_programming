#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers.
 * @a: is array.
 * @n: is number of elements.
*/

void reverse_array(int *a, int n)
{
	int m, b, c;

	for (m = 0, b = (n - 1); m < b; m++, b--)
	{
		c = a[m];
		a[m] = a[b];
		a[b] = c;
	}
}
