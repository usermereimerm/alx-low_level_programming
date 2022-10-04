#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string to be appended to s1
 * Return: a pointer to newly allocated space
 * containing concatenated string otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	int index1, index2, len1 = 0, len2 = 0;
	char *concat;

	if (*s1 == NULL)
		*s1 = "";
	else if (*s2 == NULL)
		*s2 = "";
	for (index1 = 0; s1[index1]; index1++)
		len1++;
	for (index2 = 0; s2[index2]; index2++)
		len2++;
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);
	for (index1 = 0; index1 < len1; index1++)
		concat[index1] = s1[index1];
	for (index1 = len1, index2 = 0; index1 <= (len1 + len2); index1++, index2++)
	{
		concat[index1] = s2[index2];
	}
	return (concat);
}
