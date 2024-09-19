#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: Pointer to the head of list
 *
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
