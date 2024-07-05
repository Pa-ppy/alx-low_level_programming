#include "main.h"

/**
 * rot13 - Encodes the string using rot13
 * @str: String to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
	int i;
	char c;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if ((c >= 'a' && c <= 'z'') || (c >= 'A' && c <= 'Z'))
		{
			if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
				str[i] += 13;
			else
				str[i] -= 13;
		}
	}

	return (str);
}
