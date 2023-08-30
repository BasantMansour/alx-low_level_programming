#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - this is returns the sum of all the data (n) of a linked list.
 * @head: this is pointer to the list.
 * Return: cont of all data in the list, 0 if lost empty.
 **/
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int cont = 0;

	while (node)
	{
		cont += node->n;
		node = node->next;
	}

	return (cont);
}
