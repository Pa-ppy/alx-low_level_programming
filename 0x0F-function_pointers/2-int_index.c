#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: Array to search through
 * @size: The number of elements in the array
 * @cmp: Pointer to the function to be used
 *
 * Return: The index of the first element which does not reutrn 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((array == NULL) || (cmp == NULL) || (size <= 0))
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
