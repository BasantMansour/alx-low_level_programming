#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - this is returns the nth node of a linked list.
 * @head: this is pointer to the list.
 * @index: this nth node.
 * Return: this nth node, if the node doesn't exist, returns NULL.
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int count = 0;

	while (node && count != index)
	{
		count++;
		node = node->next;
	}
	if (node && count == index)
		return (node);
	return (NULL);
}
