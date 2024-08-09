#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bits = sizeof(n) * 8;
	int lead_zero = 1;

	mask <<= (bits - 1);

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			lead_zero = 0;
		}
		else if (!lead_zero)
			_putchar('0');
		mask >>= 1;
	}

	if (lead_zero)
		_putchar('0');
}
