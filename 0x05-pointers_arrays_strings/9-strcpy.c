#include "main.h"

/**
 * _strcpy - Copies a string pointed to by src
 * @src: Pointer 1
 * @dest: Pointer 2
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != dest '\0')
	{
		*dest = src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (ptr);
}
