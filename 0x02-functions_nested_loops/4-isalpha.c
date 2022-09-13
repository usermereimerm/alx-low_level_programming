#include "main.h"

/**
 * _isalpha - tests for alphabetic character.
 * @c: character to be tested
 *
 * Return: 0 if successfuk
 */
int _isalpha(int c)
{
	char letter;
	int test;

	for (letter = 'a' || letter = 'A'; letter <= 'z' || letter <= 'Z'; letter++)
	{
		if (c == letter)
		{
			test =  1;
			break;
			test = 0;
		}
	}
	_putchar(test + '0');
}
