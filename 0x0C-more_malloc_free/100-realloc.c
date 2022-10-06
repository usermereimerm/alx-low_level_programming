#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer previously allocated to memory
 * @old_size - size allocated to ptr in bytes
 * @new_size: new size of reallocated memory in bytes
 * Return: NULL if new_size is 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr != NULL)
		free(ptr);
	if (old_size == new_size)
		return (ptr);
	printf("ptr is freed");
}
