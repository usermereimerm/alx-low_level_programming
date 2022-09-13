#include "main.h"

/**
 * _islower - tests an input for lower case letters.
 * @c: is the input to be tested
 *
 * Return: 0 if successful
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
