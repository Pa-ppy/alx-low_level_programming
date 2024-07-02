#include "main.h"

/**
 * puts2 - Prints every character of a string from the first
 * @str: String to be printed
 *
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
