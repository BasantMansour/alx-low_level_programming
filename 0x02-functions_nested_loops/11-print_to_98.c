#include "main.h"

/**
 * print_to_98 - print numbers from n to 98
 *
 * @n: input
*/

void print_to_98(int n)
{
	int count;

	for (count = n; count != 98;)
	{
		printf("%d, ", count);
		if (count < 98)
			count++;
		else
			count--;
	}

	printf("98\n");
}
