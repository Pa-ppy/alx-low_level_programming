#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t
 * @head: Pointer to the head of list_t
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
