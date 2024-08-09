#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at given index
 * @n: Pointer to the number to change
 * @index: The index of the bit to clear starting from 0
 *
 * Return: 1 if success or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = sizeof(*n) * 8;

	if (index >= bits)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
