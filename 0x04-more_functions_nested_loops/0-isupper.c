#include "main.h"

/**
 * _isupper - Returns 1 if character is uppercase and 0 otherwise
 * @c: Character to be checked
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}