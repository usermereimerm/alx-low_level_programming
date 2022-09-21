#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if they are equal and a number
 * if otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0, len;

	while (s1[index++])
		len++;
	while (*s1 && *s2 && s1 == s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
