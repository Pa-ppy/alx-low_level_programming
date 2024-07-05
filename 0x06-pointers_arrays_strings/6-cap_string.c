#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: String to be modified
 *
 * Return: A pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_char = 1;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (capitalize_char && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ('a' - 'A');
		capitalize_char = 0;
		for (int j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				capitalize_char = 1;
				break;
			}
		}
		i++;
	}

	return (str);
}
