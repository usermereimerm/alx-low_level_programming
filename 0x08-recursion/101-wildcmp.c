#include "main.h"

int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * strlen_no_wilds - returns the length of a string
 * ignoring wildcard characters
 * @str: the sring to be measured
 * Return: length of string
 */
int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;
		index++;
		len += strlen_no_wilds(str + index);
	}
	return (len);
}

/**
 * iterate_wild - iterates through a string
 * @wildstr: the string to be iterated.
 */
void iterate_wild(chr **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * postfix_match - checks if a string matches postfix
 * of another string
 * @str: string to be matched
 * @postfix: the postfix
 * Return: a pointer to null byte at end of postfix
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);
	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix);
	}
		return (postfix);
}

/**
 * wilcmp - cmpares two strings considering wildcards
 * @s1: first string
 * @s2: second string
 * Return: -1 if strings are identical otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}
	if (*s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	return (wildcmp(++s1, ++s2));
}
