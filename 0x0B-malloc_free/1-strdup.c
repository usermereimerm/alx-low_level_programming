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
	unsigned int index;

	if (str == NULL)
		return (NULL);
	string = malloc(sizeof(str) + 1);
	if (string == NULL)
		return (NULL);
	for (index = 0; index < (sizeof(string) / sizeof(char)); index++)
	{
		string[index] = str[index];
	}
	return (string);
}
