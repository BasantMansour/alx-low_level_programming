#include "lists.h"
#include <stdio.h>

/**
 * _strlen - this return length of string
 * @o: this is string of length to cheak
 *
 * Return: integer length of string
*/

int _strlen(char *o)
{
	int y = 0;

	if (!o)
		return (0);
	while (*o++)
		y++;
	return (y);
}

/**
 * print_list - this make to print a linked list
 * @h: this is pointer of the first node
 *
 * Return: the size of the list
*/

size_t print_list(const list_t *h)
{
	size_t nod = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nod++;
		h = h->next;
	}

	return (nod);
}
