#include "lists.h"

/**
 * sum_listint - Returns the sum of all data
 * @head: Pointer to the head of listint_t
 *
 * Return: Sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum_of_data = 0;

	while (head != NULL)
	{
		sum_of_data += head->n;
		head = head->next;
	}

	return (sum_of_data);
}
