#include "function_pointers.h"

/**
 * int_index - functions that find the index of a int
(* a blank line
 *@array: this array to find the index
 *@size: this size of the array
 *@cmp: the function pointer.
* Description: this function find the index of a int)?
(* section header: the header of this function is function_pointers.h)*
* Return: this is a void function no return
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (y = 0; y < size; y++)
	{
		if (cmp(*(array + y)))
			return (y);
	}

	return (-1);
}
