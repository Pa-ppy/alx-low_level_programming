#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at given index
 * @n: Pointer to the number to be changed
 * @index: Index of the bit to set starting from 0
 *
 * Return: 1 if success or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = sizeof(*n) * 8;

	if (index >= bits)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
