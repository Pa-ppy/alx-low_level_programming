#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of byte
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing the byte
 *
 * Return: Pointer to the byte in s that mathces or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == '\0')
				return (s);
			a++;
		}
		s++;
	}

	return (NULL);
}
