#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search_exp - A helper function to perform binary search
 * @array: The array to search
 * @low: The starting index
 * @high: The ending index
 * @value: The value to search for
 *
 * Return: The index of the value, or -1 if not found
 */
int binary_search_exp(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return ((int)mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using
 *                      the Exponential search algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, min;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	min = bound < size ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min);

	return (binary_search_exp(array, bound / 2, min, value));
}
