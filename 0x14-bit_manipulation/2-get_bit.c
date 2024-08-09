#include "main.h"

/**
 * get_bit - Returns value of bit at a given index
 * @n: The number to examine
 * @index: Index of bit to get starting from 0
 *
 * Return: The value of the bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = sizeof(n) * 8;

	if (index >= bits)
		return (-1);

	return ((n >> index) & 1);
}
