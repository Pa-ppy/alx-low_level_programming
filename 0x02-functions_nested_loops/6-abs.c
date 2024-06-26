#include "main.h"

/**
 * abs - Computes the absolute value of a given integer
 *
 * @n: The integer to be computed
 *
 * Return: Absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
