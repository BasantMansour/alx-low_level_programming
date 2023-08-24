#include "lists.h"
#include <stdio.h>

/**
 * free_list - this is frees all nodes of the list
 * @head: this is pointer to head node
 *
 * Return: void
*/

void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (!head)
		return;

	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}
