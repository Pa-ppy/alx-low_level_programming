#include "lists.h"

/**
 * insert_nodeint_at_index - Deletes the node at the index
 * @head: Double pointer to the head
 * @index: Index of the node to be deleted
 *
 * Return: 1 if success, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current_node = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current_node == NULL || current_node->next == NULL)
			return (-1);
		current_node = current_node->next;
	}

	temp = current_node->next;
	current_node->next = temp->next;
	free(temp);

	return (1);
}
