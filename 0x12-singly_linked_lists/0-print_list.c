#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all elements of a list
 * @l: Pointer to the list_t list
 *
 * Return: The number of nodes in the list_t
 */
size_t print_list(const list_t *l)
{
	size_t count_node = 0;

	while (l)
	{
		if (l->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", l->len, l->str)

		l = l->next;
		count_node++;
	}

	return (count_node);
}
