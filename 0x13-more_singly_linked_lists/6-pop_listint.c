#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t
 * @head: Double pointer to the head
 *
 * Return: The data of the head node or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node_data;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	node_data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (node_data);
}
