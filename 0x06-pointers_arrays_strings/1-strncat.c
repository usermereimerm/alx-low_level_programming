#include "main.h"

/**
 * _strncat - concatenates two strings by only using a given number
 * of bytes to copy from the second string that will be used to
 * append the first one
 * @dest: frist string to be appended
 * @src: string to append dest
 * @n: number of bytes to be used from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, len = 0;

	while (dest[index++])
		len++;
	for (index = 0; src[index] && index < n; index++)
		dest[len++] = src[index];
	return (dest);
}
