#include "main.h"

/**
 * _strcat - concatenates string from an array src and append it to
 * array dest.
 * @src: string to be inserted at the end.
 * @dest: string to be appended by src.
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, len = 0;

	while (dest[index++])
		len++;
	for (index = 0; src[index]; index++)
		dest[len++] = src[index];
	return (dest);
}
