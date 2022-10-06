#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string to be concatenated
 * @n: first n bytes to be coppied from s2
 * Return: pointer to memory allocated to contain
 * concatenated string otherwise NUL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		len++;
	concat = malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
		return (NULL);
	len = 0;
	for (index = 0; s1[index]; index++)
		concat[len++] = s2[index];
	concat[len] = '\0';
	return (concat);
}
