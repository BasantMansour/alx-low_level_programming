#include "lists.h"
#include <stdio.h>

/**
 * listint_len - this prints a linked lists
 * @h: this is pointer of the first node
 *
 * Return: size of list
*/

size_t listint_len(const listint_t *h)
{
	size_t y = 0;

	while (h)
	{
		h = h->next;
		y++;
	}
	return (y);
}
