#include "main.h"

/**
 * print_line - Draws a line in the terminal
 * @n: The number of times the character '_' should be drawn
 *
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
