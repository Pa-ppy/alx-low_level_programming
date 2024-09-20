#include "lists.h"

/**
 * sum_dlistint - Returns the sum of the data in a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all the data (n), or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
