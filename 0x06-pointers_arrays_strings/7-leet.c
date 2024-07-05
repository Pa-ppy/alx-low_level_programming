#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: String to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = ; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
				str[i] = leet[j];
		}
	}

	return (str);
}
