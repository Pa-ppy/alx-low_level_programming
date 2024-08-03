#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen: - Returns the length of a string
 * @s: String to check
 *
 * Return: The length of the string
 */
static unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len])
		len++;
	return (len);
}

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
	unsigned int len = _strlen(str);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = malloc(len + 1);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	for (unsigned int i = 0; i < len; i++)
		new_node->str[i] = str[i];
	new_node->str[len] = '\0';

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
