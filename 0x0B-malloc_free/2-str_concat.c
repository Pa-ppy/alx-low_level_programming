#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two given strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to a newly allocated space or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	concat_str = malloc((len1 + len2 + 1) * sizeof(char));

	if (concat_str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];
	for (j = 0; j < len2; j++)
		concat_str[i + j] = s2[j];
	concat_str[i + j] = '\0';

	return (concat_str);
}
