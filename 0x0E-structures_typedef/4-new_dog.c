#include "dog.h"

/**
 * new_dog - creates a new dog structure
 * @name: name of dog to be created
 * @age: age of dog
 * @owner: owner of new dog
 * Return: NULL if function fails others
 * pointer to memory allocated for new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2, index;
	dog_t *oga;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	for (index = 0; name[index]; index++)
		len1++;
	for (index = 0; owner[index]; index++)
		len2++;
	oga = malloc(sizeof(float) + (sizeof(char) * (len1 + len2 + 2)));
	if (oga == NULL)
		return (NULL);
	oga->name = malloc(sizeof(char) * (len1 + 1));
	if (oga->name == NULL)
	{
		free(oga->name);
		free(oga);
		return (NULL);
	}
	oga->owner = malloc(sizeof(char) * (len2 + 1));
	if (oga->owner == NULL)
	{
		free(oga->owner);
		free(oga);
		return (NULL);
	}
	for (index = 0; index <= (len1 + 1); index++)
		oga->name[index] = name[index];
	for (index = 0; index <= (len2 + 1); index++)
		oga->owner[index] = owner[index];
	oga->age = age;
	return (oga);
}
