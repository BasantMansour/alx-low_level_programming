#include "lists.h"
#include <stdio.h>

/**
 * list_len - this determine the length of linked list
 * @h: this pointer of the first node
 *
 * Return: the size of the list
*/

size_t list_len(const list_t *h)
{
	size_t u = 0;

	while (h)
	{
		h = h->next;
		u++;
	}
	return (u);
}
