#include "function_pointers.h"

/**
 * array_iterator - executes a function given to it as a parameter
 * on each element of an array
 * @array: array to be iterated
 * @size: size of array
 * @action: pointer to function to be used
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int index;

	for (index = 0; index < size; index++)
		(*action)(array[index]);
}
