#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to function used for comparison
 * Return: index of the first element for which
 * cmp function does not return 0 otherwise return -1
 * if no matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int result, index;

	for (index = 0; index < size; index++)
	{
		result = cmp(array[index]);
		if (result != 0)
			break;
	}
	if (result == 0 || size <= 0)
		return (-1);
	return (result);
}
