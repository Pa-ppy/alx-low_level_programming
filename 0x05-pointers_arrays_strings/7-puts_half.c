#include "main.h"

/**
 * puts_half - Prints half of a string followed by a new line
 * @str: String to be halved
 *
 */
void puts_half(char *str)
{
	int length = 0;
	char *temp = str;
	int i, halfLength;

	while (*temp != '\0')
	{
		length++;
		temp++;
	}
	halfLength = length / 2;

	for (i = 0; i < halfLength; i++)
		_putchar(str[i]);
	_putchar('\n');
}
