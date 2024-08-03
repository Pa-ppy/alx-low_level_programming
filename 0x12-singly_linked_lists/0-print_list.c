#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Prints all elements of a list
 * @h: Pointer to the list_t list
 *
 * Return: The number of nodes in the list_t
 */
size_t print_list(const list_t *h)
{
	size_t count_node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str)

		count_node++;
		h = h->next;
	}

	return (count_node);
}
