#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets in lowercase ten times
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char letter = 'a';
	
	for (i = 0; i < 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
