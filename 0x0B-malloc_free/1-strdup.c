#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains the copy of the string given
 * as parameter
 * @str: the string to be filled into allocated space
 * Return: NULL if str is null otherwise a pointer to str
 */
char *_strdup(char *str)
{
	char *string;
	unsigned int index = 0;

	if (str == NULL)
		return (NULL);
	string = malloc(sizeof(str) + 1);
	if (string == NULL)
		return (NULL);
	while (*str != '\0')
	{
		string[index] = str[index];
		index++;
	}
	return (string);
}
