#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: Pointer to the listint_t list
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count_variable = 0;

	while (h != NULL)
	{
		count_variable++;
		h = h->next;
	}

	return (count_variable);
}
