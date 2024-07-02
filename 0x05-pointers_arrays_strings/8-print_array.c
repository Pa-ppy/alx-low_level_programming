#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array
 * @n: Number of elements to be printed in array
 * @a: Array to be printed
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}