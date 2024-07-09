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
	char *a;

	while (*s != '\0')
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
				return (s);
		}
		s++;
	}

	return (NULL);
}
