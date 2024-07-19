#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 * Function causes normal process termination if failed
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = mallo(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}