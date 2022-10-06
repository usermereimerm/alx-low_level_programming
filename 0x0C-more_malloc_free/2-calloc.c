#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in array
 * @size: number of bytes of each element
 * Return: NULL if nmemb or size is 0 otherwise
 * pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(size *nmemb);
	if (memory == NULL)
		return (NULL);
	filler = memory;
	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';
	return (memory);
}
