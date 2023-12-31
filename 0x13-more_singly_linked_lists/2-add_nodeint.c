#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - this adds a node to the top
 * @head: this pointer to first node
 * @n: this value for new node
 *
 * Return: to pointer to new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
