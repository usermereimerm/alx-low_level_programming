#include<stdio.h>
#include<stdlib.h>

int _islower(int c);

/**
 * Description: main - calls a function tht checks for lowercase alphabet.
 * Return: 0 if successful.
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

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
	printf("%d", test);
}
