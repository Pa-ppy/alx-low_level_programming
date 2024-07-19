#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc
 * @ptr: Pointer to previous memory allocated
 * @old_size: Size in bytes of allocated space
 * @new_size: New size in bytes of new memory allocated
 *
 * Return: A pointer to the newly allocated memory block or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size, i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	min_size = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < min_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	free(ptr);

	return (new_ptr);
}
