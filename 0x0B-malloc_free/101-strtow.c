#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string to be splitted
 * Return: NULL if str is null or empty
 * otherwise a pointer to array of strings
 */
char **strtow(char *str)
{
	char **strings;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	strings = malloc(sizeof(char) * 8);
	return (strings);
}
