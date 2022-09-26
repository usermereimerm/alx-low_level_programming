#include "main.h"

/**
 * _memset - fills the first n bytes of the memory
 * @s: a pointer to the memory area to be filled
 * @c: the character to fill the memory area
 * @n: number of bytes to be filled
 * Return: a pointer to the filled memory
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
