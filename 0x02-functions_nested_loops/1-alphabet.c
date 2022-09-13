#include<stdio.h>
#include<stdlib.h>

void print_alphabet(void);

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
		putchar(letter);
	putchar('\n');
}
