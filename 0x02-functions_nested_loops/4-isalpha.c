#include<stdio.h>
#include<stdlib.h>

int _isalpha(int c);

/**
 * Description: main - checks for alphabetic character.
 * Return: 0 if successful.
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	return (0);
}

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
