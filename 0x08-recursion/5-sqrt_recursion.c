#include "main.h"

/**
 * _sqrt_sub_function - Assitive function to the sqrt function
 * @n: Number to find the square root
 * @i: The current divisor
 *
 * Return: The natural square root of n or -1
 */
int _sqrt_sub_function(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_sub_function(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root
 * @n: The number to find its square root
 *
 * Return: The natural square root of n, or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_sub_function(n, 0));
}
