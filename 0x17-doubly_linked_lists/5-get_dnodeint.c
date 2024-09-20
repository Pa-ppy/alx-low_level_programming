#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a Doubly linked list
 * @head: Pointer to the head of the list
 * @index: index of the node, starting from 0
 *
 * Return: the nth node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
