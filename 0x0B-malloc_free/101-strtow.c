#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string
 * @str: The string to count words from
 *
 * Return: The number of words counted
 */
int word_count(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str == ' ')
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to be splitted
 *
 * Return: A pointer to an array of splitted words
 */
char **strtow(char *str)
{
	char **words;
	char *word_start;
	int i, j, k, word_len, num_words;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = word_count(str);

	if (num_words = 0)
		return (NULL);
	words = malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);
	i = 0;

	while (*str)
	{
		while (*str == ' ')
			str++;
		if (*str == '\0')
			break;

		word_start = str;

		while (*str != ' ' && *str != '\0')
			str++;

		word_len = str - word_start;
		words[i] = malloc((word_len + 1) * sizeof(char));

		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);

			return (NULL);
		}
		for (k = 0; k < word_len; k++)
			words[i][k] = word_start[k];
		words[i][k] = '\0';
		i++;
	}
	words[i] = NULL;

	return (words);
}
