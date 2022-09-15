#include "main.h"

/**
 * _isupper - test a given character for uppercase
 * @c: the character to be tested
 * Return: 1 if successful otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
