#include "main.h"

/**
 * array_range - creates an array of integer
 * @min: starting value of members of the array
 * @max: end value
 * Return: NULL if min > max or if malloc fails otherwise
 * return a pointer to array
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = min++;
	return (array);
}
