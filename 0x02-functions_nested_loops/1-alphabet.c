#include "main.h"

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
