#include "main.h"

/**
 * reverse_array - Reverses the elements of an array
 * @a: Array of integers
 * @n: Number of elements
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
