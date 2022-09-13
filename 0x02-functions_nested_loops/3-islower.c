#include "main.h"

/**
 * _islower - tests an input for lower case letters.
 * @c: is the input to be tested
 *
 * Return: 0 if successful
 */
int _islower(int c)
{
	char letter;
	int test;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
			test = 1;
		break;
			test = 0;
	}
	_putchar(test + '0');
}
