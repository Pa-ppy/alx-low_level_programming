#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabets in lowercase and then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char small_alpha;
	char big_alpha;

	for (small_alpha = 'a'; small_alpha <= 'z'; small_alpha++)
		putchar(small_alpha);
	for (big_alpha = 'A'; big_alpha <= 'Z'; big_alpha++)
		putchar(big_alpha);

	putchar('\n');

	return (0);
}
