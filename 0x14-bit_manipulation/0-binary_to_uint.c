#include "main.h"

/**
 * binary_to_uint - Converts a binary num to unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: The converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = (num << 1) | (b[i] - '0');
	}

	return (num);
}
