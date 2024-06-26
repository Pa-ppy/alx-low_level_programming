#include "main.h"

/**
 * int print_sign - Prints the sign of a number
 *
 * @n: The number to be checked
 *
 * Return: 1 if @n is greater than 0, 0 if zero, -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
