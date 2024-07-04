#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: First string
 * @src: Second string
 * @n: Maximum number of bytes to be copied
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (i = 0; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
