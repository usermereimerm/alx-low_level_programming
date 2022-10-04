#include "main.h"

/**
 * alloc_grid - returns a pointer to a two-dimensional
 * array of integers
 * @width: width of array i.e the number of columns
 * @height: number of rows
 * Return: NULL on failure, if height is zero or negative
 * otherwise return a pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **array, h_index, w_index;

	if (height <= 0 || width <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (h_index = 0; h_index < height; h_index++)
	{
		array[h_index] = malloc(sizeof(int) * width);
		if (array[h_index] == NULL)
		{
			return (NULL);
		for (; h_index >= 0; h_index--)
			free(array[h_index]);
		free(array);
		return (NULL);
		}
	}
	for (h_index = 0; h_index < height; h_index++)
	{
		for (w_index = 0; w_index < width; w_index++)
			array[h_index][w_index] = 0;
	}
	return (array);
}
