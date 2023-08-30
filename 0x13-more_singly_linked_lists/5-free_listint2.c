#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - this is frees a list of int
 * @head: this is pointer to first node
 *
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	if (*!heaad)
		return;

	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
