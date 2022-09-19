#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be checked
 * Return: the lenght of the string s
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
