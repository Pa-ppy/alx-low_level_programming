#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checks if a character is uppercase or lowercase
 * @c: The character to be checked
 *
 * Return: 1 if char is uppercase or lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	return (isalpha(c) != 0 ? 1 : 0);
}
