#include "lists.h"

/**
 * print_listint - Prints all the elements of a listing
 * @h: Pointer to the listint_t list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count_variable = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_variable++;
	}

	return (count_variable);
}
