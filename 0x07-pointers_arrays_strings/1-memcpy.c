#include "main.h"

/**
 * _memcpy - copies n bytes from the memory area pointed
 * @dest: a pointer to the memory address to paste copied byte
 * @src: the source to copy characters from
 * @n: the number of bytes to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;
	char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];
	return (dest);
}
