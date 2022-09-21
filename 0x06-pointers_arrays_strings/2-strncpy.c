#include "main.h"

/**
 * _strncpy - copies string from one array to another
 * @dest: array to drop copied string
 * @src: array to copy string from
 * @n: number of byte of string to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, len = 0;

	while (src[index++])
		len++;
	for (index = 0; index < len && index < n; index++)
		dest[index] = src[index];
	for (index = len; index <= len; index++)
		dest[index] = '\0';
	return (dest);
}
