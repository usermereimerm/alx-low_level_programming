#include "main.h"

/**
 * _memcpy - copiens n bytes from the memory area pointed
 * @dest: a pointer to the memory address to paste copied byte
 * @src: the source to copy characters from
 * @n: the number of bytes to copy
 * Return: a pointer to dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];
	return (dest);
}
