#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using the function pointed to by f
 * @name: The name to be printed
 * @f: Pointer to a function that takes *char as the argument
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
		return;

	f(name);
}
