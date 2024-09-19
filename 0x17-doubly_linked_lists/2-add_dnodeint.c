#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at beginning
 * @head: Pointer to the head of the list
 * @n: Integer to be stored in new node
 *
 * Return: address of the new node or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;

	*head = new_line;

	return (new_node);
}
