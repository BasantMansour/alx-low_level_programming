#include "function_pointers.h"

/**
 * int_index - func to search for int.
 * @array: array of int .
 * @size:the size.
 * @cmp:compare.
 * Return: -1 or b.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int b = 0;

	if (array && size && cmp)
		while (b < size)
		{
			if (cmp(array[b]))
				return (b);
			b++;
		}
	return (-1);
}
