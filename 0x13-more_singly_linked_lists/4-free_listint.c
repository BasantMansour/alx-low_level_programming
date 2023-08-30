#include "lists.h"
#include <stdio.h>

/**
 * free_listint - this is free a list of int
 * @head: pointer to first node
 *
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
