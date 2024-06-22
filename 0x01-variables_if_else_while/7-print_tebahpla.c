#include <stdio.h>

/**
 * main - Prints the reversed alphabets in lowercase
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
