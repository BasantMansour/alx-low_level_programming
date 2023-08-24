#include "lists.h"

/**
 * _strlen - this return length of string
 * @s: this is string of length to cheak
*/

int _strlen(char *s)
{
	int y = 0;

	if (!s)
		return (0);
	while (*s++)
		y++;
	return (y);
}

/**
 * print_list - this make to print a linked list
 * @h: this is pointer of the first node
*/

size_t print_list(const list_t *h)
{
	size_t y = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		y++;
	}
	return (y);
}
