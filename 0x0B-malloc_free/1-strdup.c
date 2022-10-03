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
	int index, len = 0;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	string = malloc(sizeof(char) *(len + 1));
	if (string == NULL)
		return (NULL);
	for (index = 0; index < len; index++)
	{
		string[index] = str[index];
		string[len] = '\0';
	}
	return (string);
}
