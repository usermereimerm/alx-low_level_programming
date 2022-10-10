#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: address of structure to be initialized
 * @name: member of d
 * @age: 2nd member of d
 * @owner: last member of d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

