#include "main.h"

/**
 * malloc_checked - allocated memory using malloc
 * @b: size of memory to be allocated
 * Return: pointer to allocated memory else if
 * malloc failed return 98.
 */
void *malloc_checked(unsigned int b)
{
	int *memory = malloc(b);

	if (memory == NULL)
		exit (98);
	return (memory);
}
