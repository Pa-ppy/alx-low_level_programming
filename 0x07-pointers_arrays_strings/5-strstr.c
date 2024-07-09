#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: Pointer to the string to be searched
 * @needle: Pointer to the substring to locate
 *
 * Return: Pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}

	return (NULL);
}
