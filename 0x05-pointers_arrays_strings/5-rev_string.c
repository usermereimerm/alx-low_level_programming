#include "main.h"

/**
 * rev_string - reverses a given string
 * @s: string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	while (s[index++])
		len++;
	for (index = len - 1; index >= 0; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
