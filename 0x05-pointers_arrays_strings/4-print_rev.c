#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: String to be printed in reverse
 *
 */
void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
		end++;
	while (end > s)
	{
		end--;
		_putchar(*end);
	}
	_putchar('\n');
}
