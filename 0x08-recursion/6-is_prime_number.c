#include "main.h"

/**
 * is_prime_sub - Assisting function for prime checking
 * @n: Number to be checked
 * @i: The current divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_sub(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_sub(n, i + 1));
}

/**
 * is_prime_number - Returns 1 if the integer is prime
 * @n: The number to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_sub(n, 2));
}
