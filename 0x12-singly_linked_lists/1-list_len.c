#include "lists.h"

/**
 * list_len - Returns the number of elements in a list
 * @h: The pointer to the list_t
 *
 * Return: The number of elements in list_t
 */
size_t list_len(const list_t *h)
{
	size_t count_node = 0;

	while (h)
	{
		count_node++;
		h = h->next;
	}

	return (count_node);
}
