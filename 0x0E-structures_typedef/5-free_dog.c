#include "dog.h"

/**
 * free_dog - frees the spce allocated for dog
 * @d: structure to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
