#include "dog.h"

/**
 * print_dog - prints a structure
 * @d: structure to be printed
 */
void print_dog(struct dog *d)
{
	if (d = NULL)
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->name);
	if (d->age == NULL)
		printf("Age: (nil)");
	else
		printf("Age: %f", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s", d->owner);
}
