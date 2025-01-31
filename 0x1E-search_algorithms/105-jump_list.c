#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_list - Searches for a value in a sorted singly linked list
 * @list: Pointer to the head of the list
 * @size: Number of nodes in the list
 * @value: The value to search for
 * Return: Pointer to the first node where value is located, or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev_index;
	listint_t *prev, *curr;

	if (!list || size == 0)
		return (NULL);

	step = sqrt(size);
	prev = list;
	curr = list;

	while (curr->next && curr->n < value)
	{
		prev = curr;
		prev_index = curr->index;
		for (size_t i = 0; i < step && curr->next; i++)
			curr = curr->next;

		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
	}

	printf("Value between indexes [%lu] and [%lu]\n", prev_index, curr->index);

	while (prev && prev->index <= curr->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
