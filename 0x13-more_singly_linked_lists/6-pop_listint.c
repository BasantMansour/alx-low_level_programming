#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - this deletes the head node of a linked list.
 * @head: this is pointer to the list.
 *
 * Return: this head node’s deta (n).
 **/
int pop_listint(listint_t **head)
{
	int deta;
	listint_t *first_node = *head;

	if (!first_node)
		return (0);

	deta = (*head)->n;
	*head = first_node->next;
	free(first_node);
	return (deta);
}
