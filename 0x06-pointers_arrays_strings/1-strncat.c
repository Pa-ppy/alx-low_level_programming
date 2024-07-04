#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: First string
 * @src: Second string
 * @n: Maximum number of bytes to be used
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_pointer = dest;
	int i;

	while (*dest_pointer != '\0')
		dest_pointer++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*dest_pointer = src[i];
		dest_pointer++;
	}
	*dest_pointer = '\0';

	return (dest);
}
