#include "main.h"

/**
 * string_toupper - changes all lower case letters of
 * a string to upper case
 * @str: string to be changed
 * Return: a pointer to the changed string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (srt[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
