#include "main.h"

/**
 * _memset - fills the first n bytes of the memory
 * @s: a pointer to the memory area to be filled
 * @b: the character to fill the memory area
 * @n: number of bytes to be filled
 * Return: a pointer to the filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
