#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers.
 * @a: is array.
 * @n: is number of elements.
*/

void reverse_array(int *a, int n)
{
	int u, w, a;

	for (u = 0, w = (n - 1); u < w; u++, w--)
	{
		a = a[u];
		a[u] = a[w];
		a[w] = a;
	}
}
