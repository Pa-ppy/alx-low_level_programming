#include "main.h"
#include <unistd.h>

/**
 * _strcat - Concatenates two strings
 * @dest: First string
 * @src: Second string
 *
 * Return: A pointer to the resulting string dest
 *
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*start != '\0')
		start++;
	while (*src != '\0')
	{
		*start = *src;
		start++;
		src++;
	}
	*start = '\0';

	return (dest);
}
