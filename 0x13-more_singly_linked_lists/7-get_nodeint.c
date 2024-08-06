#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node
 * @head: Pointer to the head
 * @index: Index of the node, starting at 0
 *
 * Return: The nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
