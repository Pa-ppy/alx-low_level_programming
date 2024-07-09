#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to the the pointer char
 * @to: New string to set
 */
void set_string(char **s, char *to)
{
	char buffer[100];
	int i;

	for (i = 0; i < 100 && to[i] != '\0'; i++)
		buffer[i] = to[i];
	buffer[i] = '\0';
	*s = buffer;
}
