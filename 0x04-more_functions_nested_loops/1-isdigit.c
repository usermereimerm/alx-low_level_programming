#include "main.h"

/**
 * _isdigit - checks if a given character is a digit.
 * @c: character to be checked.
 *
 * Return: 1 if successful otherwise 0.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
