#include <stdio.h>

/**
 * main - Prints all possible combinations of two digit numbers
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = tens + 1; ones <= 9; ones++)
		{
			putchar('0' + tens);
			putchar('0' + ones);
			if (tens != 8 || ones != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
