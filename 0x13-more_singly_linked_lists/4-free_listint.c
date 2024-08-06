#include "lists.h"

/**
 * free_listint - Frees a listint_t
 * @head: Pointer to the head
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
