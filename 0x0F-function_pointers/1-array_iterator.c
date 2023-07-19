#include "function_pointers.h"

/**
 * array_iterator - array and function pointer.
 * @array: array.
 * @size: size.
 * @action: func pointer.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *n = array + size - 1;

	if (array && size && action)
		while (array <= n)
			action(*array++);
}
