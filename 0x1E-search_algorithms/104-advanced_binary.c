#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints an array between given indexes
 * @array: The input array
 * @low: The starting index
 * @high: The ending index
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search_recursive - Recursively searches for first occurrence of value
 * @array: The input array
 * @low: The starting index
 * @high: The ending index
 * @value: The value to find
 * Return: The first index where value is located, or -1 if not found
 */
int binary_search_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
		return (-1);

	print_array(array, low, high);
	mid = low + (high - low) / 2;

	if (array[mid] == value)
	{
		if (mid == low || array[mid - 1] != value)
			return (mid);
		return (binary_search_recursive(array, low, mid, value));
	}
	else if (array[mid] < value)
		return (binary_search_recursive(array, mid + 1, high, value));
	else
		return (binary_search_recursive(array, low, mid - 1, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array using binary search
 * @array: The input array
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The first index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
