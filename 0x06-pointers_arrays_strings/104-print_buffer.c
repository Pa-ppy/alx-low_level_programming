#include <stdio.h>

/**
 * print_buffer - Prints content of a buffer
 * @b: Buffer to be printed
 * @size: Number of bytes from buffer
 *
 * Desc: Prints the buffer content in hex and ASCII
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		for (j = 0; j < 10; j += 2)
		{
			if (i + j < size)
				printf("%02x%02x ", b[i + j] & 0xFF, b[i + j + 1] & 0xFF);
			else
				printf("   ");
		}
		printf(" ");
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (b[i + j] >= 32 && b[i + j] <= 126)
					printf("%c", b[i + j]);
				else
					printf(".");
			}
		}
		printf("\n");
	}
}
