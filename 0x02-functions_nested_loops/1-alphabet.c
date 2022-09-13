#include "main.h"

/**
 *  Description: main - prints alphabets in lower case
 *  Return: 0 if successful.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints lower case alphabet.
 * Return: void if successful.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
