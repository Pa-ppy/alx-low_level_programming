#include <stdio.h>

/**
 * main - Prints numbers of base 16 in lowercase
 *
 * Return: Always 0(Success)
 *
 */
int main(void)
{
	char hex_num;

	for (hex_num = '0'; hex_num <= '9'; hex_num++)
		putchar(hex_num);
	for (hex_num = 'a'; hex_num <= 'f'; hex_num++)
		putchar(hex_num);
	putchar('\n');

	return (0);
}
