#include "main.h"

/**
 * print_alphabet - Prints the alphabets in lowercase"
 *
 * return: Always 0 (success)
 */
void print_alphabet(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

int main()
{
	print_alphabet();
	return (0);
}
