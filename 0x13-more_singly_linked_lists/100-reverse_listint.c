#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - this reverses a listint_t linked list.
 * @head: this pointer to the list.
 * Return: thispointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev_node, *next_node;

	if (!head)
		return (NULL);

	rev_node = NULL;
	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = rev_node;
		rev_node = *head;
		*head = next_node;
	}
	*head = rev_node;
	return (*head);
}
