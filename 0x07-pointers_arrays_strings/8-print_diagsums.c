#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals
 * @a: Pointer to the square matrix
 * @size: Size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int primary_sum = 0;
	int secondary_sum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		primary_sum += a[i * size + i];
		secondary_sum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", primary_sum, secondary_sum);
}
