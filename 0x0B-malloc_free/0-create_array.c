#include "main.h"

/**
 * create_array - creates an array of characters and
 * initializes it with a specific char
 * @size: size of array to be created
 * @c: char to initialize array with
 * Return: null if size is 0 oherwise a pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array = (char*)malloc(size);

	if (size == 0)
		return(NULL);
	array[0] = c;
	return (array);
}
