#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals.
 * @a: array.
 * @size: size of array.
*/

void print_diagsums(int *a, int size)
{
	int u, o1 = 0, o2 = 0;

	for (u = 0; u < size; u++)
	{
		o1 += a[u];
		o2 += a[size - u - 1];
		a += size;
	}
	printf("%d, ", o1);
	printf("%d\n", o2);
}
