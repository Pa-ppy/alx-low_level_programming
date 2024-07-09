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
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}
