#include "main.h"

/**
 * _isupper - Checks if a character is an uppercase letter
 * @c: Character to be checked
 *
 * Return: 1 if the character is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
