#include "main.h"

/**
 * _atoi - Converts string to an integer
 * @s: String to be converted
 *
 * return: 0 if there are no numbers in string
 * Return: The signed result of the operation
 *
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
			sign = -sign;
		else if (*s == '+')
		else if (*s >= '0' && *s <= '9')
			result = result * 10 + (*s - '0');
		else if (result != 0)
			break;
		s++;
	}

	return (result * sign);
}
