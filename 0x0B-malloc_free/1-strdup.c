#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly created space in memory
 * @str: The string to be duplicated
 *
 * Return: A pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *dupli_str;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	dupli_str = malloc((len + 1) * sizeof(char));

	if (dupli_str == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dupli_str[i] = str[i];

	return (dupli_str);
}
