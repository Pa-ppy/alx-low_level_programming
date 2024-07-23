#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure representing a dog
 * @name: Pointer to the dog's name
 * @age: Dog's age
 * @owner: Pointer to the dog's owner
 */

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
