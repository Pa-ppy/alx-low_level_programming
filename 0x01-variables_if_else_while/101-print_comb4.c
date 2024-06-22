#include <stdio.h>

/**
 * main - Prints all possible combinations of three digit numbers
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
        int tens;
        int ones;
	int hundreds;

	for (hundreds = 0; hundreds <= 9; hundreds++)
	{
	        for (tens = hundreds + 1; tens <= 9; tens++)
        		{
                		for (ones = tens + 1; ones <= 9; ones++)
                		{
                        		putchar('0' + hundreds);
					putchar('0' + tens);
                        		putchar('0' + ones);
                        		if (!(hundreds == 7 && tens == 8 && ones != 9))
                        		{
                                		putchar(',');
                                		putchar(' ');
                        		}
                		}
        		}
	}
        putchar('\n');

        return (0);
}
