#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at given index
 * @head: Double pointer to the head of the list
 * @index: index of the node to be deleted, starting from 0
 *
 * Return: 1 if successful, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (!temp)
		return (-1);

	if (temp == *head)
	{
		*head = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
	}
	else
	{
		if (temp->prev)
			temp->prev->next = temp->next;
		if (temp->next)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
