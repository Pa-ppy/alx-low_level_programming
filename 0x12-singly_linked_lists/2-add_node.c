#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the start of list_t
 * @head: Double pointer to the head of list_t
 * @str: New string to be added
 *
 * Return: The address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		;

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
