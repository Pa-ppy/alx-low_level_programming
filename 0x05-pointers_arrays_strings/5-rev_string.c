#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 *
 */
void rev_string(char *s)
{
	char *starting = s;
	char *ending = s;
	char temp;

	while (*ending != '\0')
		ending++;
	ending--;
	while (starting < ending)
	{
		temp = *starting;
		*starting = *ending;
		*ending = temp;
		starting++;
		ending--;
	}
}
