#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog
 * dog_t - Type struct
 * @name: Pointer to the dog's name
 * @age: Dog's age
 * @owner: Pointer to the dog's owner
 *
 * Return: Pointer to the new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = (name != NULL) ? strdup(name) : NULL;
	d->owner = (owner != NULL) ? strdup(owner) : NULL;

	if ((name != NULL && d->name == NULL) || (owner != NULL && d->owner == NULL))
	{
		free(d->name);
		free(d->owner);
		free(d);

		return (NULL);
	}
	d->age = age;

	return (d);
}
