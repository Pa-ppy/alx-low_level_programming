#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates al arguments
 * @ac: Number of arguments
 * @av: Array of pointers to the arguments
 *
 * Return: A pointer to a new string or NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++;
	}
	total_length++;
	str = malloc(total_length * sizeof(char));

	if (str == NULL)
		return (NULL);
	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
