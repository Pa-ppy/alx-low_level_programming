#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int sample = 1;
	char *endian = (char *)&sample;

	if (*endian)
		return (1);
	else
		return (0);
}
