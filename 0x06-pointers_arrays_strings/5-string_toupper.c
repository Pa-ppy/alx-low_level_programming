#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @str: String to be modified into upper
 *
 * Return: A pointer to the results
 */
char *string_toupper(char *str)
{
	char *pointer = str;

	while (*pointer != '\0')
	{
		if (*pointer >= 'a' && *pointer <= 'z')
			*pointer = *pointer - ('a' - 'A');
		pointer++;
	}

	return (str);
}
