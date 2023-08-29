#include "lists.h"
#include <stdio.h>

/**
 * print_listint - this prints a linked lists
 * @h: this pointer to first node
 *
 * Return: the size of the list
*/

size_t print_listint(const listint_t *h)
{
	size_t y = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		y++;
	}
	return (y);
}
