#include<stdio.h>
#include<stdlib.h>

void print_alphabet_x10(void);

/**
 * Description: main - print the lowercase alphabet 10 x.
 * Return: 0 if successful.
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - print lowers case alphabets 10x
 * Return: void if successful.
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);
		putchar('\n');
	}
}
