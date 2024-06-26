#include "main.h"

/**
 * times_table - Prints the 9 times table starting from 0
 *
 */
void times_table(void)
{
	int i, result;

	for (i = 0; i <=9; i++)
	{
		result = 9 * i;
		if (result >= 10)
			_putchar((result / 10) + '0');
		_putchar((result % 10) + '0');

		if (i < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
