#include "main.h"

/**
 * flip_bits - Returns the number of bits needed for flipping
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res = n ^ m;
	unsigned int counter = 0;

	while (xor_res)
	{
		counter += xor_res & 1;
		xor_res >>= 1;
	}

	return (counter);
}
